#include<iostream>
using namespace std;

typedef void (*funptr)(int , int);

void add(int a , int b){
	cout<<a+b<<endl;
}
void subtract(int a , int b){
	cout<<a-b<<endl;
}
int main(){
	funptr ptr;
	ptr= &add;
	ptr(2,1);
	ptr= &subtract;
	ptr(3,2);
	return 0 ;
}
