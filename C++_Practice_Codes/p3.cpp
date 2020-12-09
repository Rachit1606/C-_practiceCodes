#include<iostream>
using namespace std;

int main(){
	int num[] = {56,34,45,6,7};
	int *ptr;
	cout<<"The numbers are: "<<endl;
	for(int i=0;i<5;i++){
		cout<<num[i]<<" ";
	}
	cout<<endl;
	ptr=num;
	cout<<"Value of ptr: "<<*ptr<<endl;
	ptr++;
	cout<<"Value of ptr++: "<<*ptr<<endl;
	ptr--;
	cout<<"Value of ptr--: "<<*ptr<<endl;
	ptr=ptr+2;
	cout<<"Value of ptr+2: "<<*ptr<<endl;
	ptr=ptr-1;
	cout<<"Value of ptr-1: "<<*ptr<<endl;
	ptr=ptr+3;
	cout<<"Value of ptr+3: "<<*ptr<<endl;
	ptr=ptr-4;
	int sum = 0;
	for(int i=0;i<5;i++){
		sum=sum + *ptr;
		ptr++;
	}
	cout<<"sum is : "<<sum<<endl;
	return 0;	
}
