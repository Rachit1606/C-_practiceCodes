#include <bits/stdc++.h>   
using namespace std; 
 
class Item {
	public: 
    int value, weight; 
  
    Item(int value, int weight) 
        : value(value), weight(weight) 
    { 
    } 
}; 
 
bool cmp(Item a, Item b) 
{ 
    double r1 = (double)a.value / a.weight; 
    double r2 = (double)b.value / b.weight; 
    return r1 > r2; 
} 
  
double greedyFractionalKnapsack( Item arr[], int N, int size) 
{ 
    sort(arr, arr + size, cmp); 

    int curWeight = 0; 
    double finalval = 0.0; 
 
    for (int i = 0; i < size; i++) { 
   
        if (curWeight + arr[i].weight <= N) { 
            curWeight += arr[i].weight; 
            finalval += arr[i].value; 
        } 
        else { 
            int remain = N - curWeight; 
            finalval += arr[i].value * ((double)remain / arr[i].weight); 
            break; 
        } 
    } 
    return finalval; 
} 
 
int main() 
{ 
     
    int N = 20; 
    Item arr[] = { { 24, 18 }, 
                   { 25, 15 }, 
                   { 15, 10 }, 
                 }; 
  
    int size = 3; 
    cout << "Max. profit = "<< greedyFractionalKnapsack(arr, N, size); 
    return 0; 
}
