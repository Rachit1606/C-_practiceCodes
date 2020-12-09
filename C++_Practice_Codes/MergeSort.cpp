#include <stdio.h> 
#include <stdlib.h> 
void merge(int arr[], int a, int mid, int b) 
{ 
    int i, j, k; 
    int n1 = mid - a + 1; 
    int n2 = b - mid; 
    int L[n1], R[n2]; 

    for ( i = 0; i < n1; i++) 
        L[i] = arr[a + i]; 
    for ( j = 0; j < n2; j++) 
        R[j] = arr[mid + 1 + j]; 

    i = 0;  
    j = 0; 
    k = a;  
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; 
            i++; 
        } 
        else { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
void mergeSort(int arr[], int a, int b) 
{ 
    if (a < b) { 
        int mid = a + (b - a) / 2; 
  
        mergeSort(arr, a, mid); 
        mergeSort(arr, mid + 1, b); 
  
        merge(arr, a, mid, b); 
    } 
} 
void printArray(int A[], int size) 
{ 
    for (int i = 0; i < size; i++) 
        printf("%d ", A[i]); 
    	printf("\n"); 
} 

int main() 
{ 
    int arr[] = { 13,26,51,31,9,69,34,23 }; 
    int arr_size = sizeof(arr) / sizeof(arr[0]); 
  
    printf("Given array is \n"); 
    printArray(arr, arr_size); 
  
    mergeSort(arr, 0, arr_size - 1); 
  
    printf("\nSorted array is \n"); 
    printArray(arr, arr_size); 
    return 0; 
} 
