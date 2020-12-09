#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int a=10, *ptr , **ptr2;
	ptr = &a;
	ptr2 = &ptr;
	cout<<"the address of a: "<<ptr<<endl;
	cout<<"the address of ptr: "<<ptr2<<endl;
	ptr+=2;
	ptr2+=2;
	cout<<"the address of a: "<<ptr<<endl;
	cout<<"the address of ptr: "<<ptr2<<endl;
	
	*ptr= (*ptr)/2;
	cout<<"the value of a is "<<(*ptr);
	return 0;
}
