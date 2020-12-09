#include<iostream>
#include<conio.h>
using namespace std;

class vector{
	float A[100];
	int x;
	public:
	void create(void);
	void modify(int a, float b);
	void multiply(int a);
	void display(void);
};

void vector :: create(){
	cout<<"Enter the size of vector "<<endl;
	cin>>x;
	cout<<"Enter the values"<<endl;
	for(int i=0;i<x;x++){
		cin>>A[i];
	}
}
void vector :: modify(int a , float b){
	A[a-1]=b;
}
void vector :: multiply(int a){
	for(int i=0;i<=x;i++){
		A[i]=A[i]*a;
	}
}
void vector :: display(){
	for(int i=0;i<x;i++)
		cout<<A[i]<<"  ";
}
int main(){
	vector v;
	v.create();
	v.display();
	v.modify(2,4.5);
	v.multiply(5);
	return 0;
}
