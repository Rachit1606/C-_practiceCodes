#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;

int main(){
	
	int code[]={1001,905,45,14,14};
	double cost[]={250.75,95.7,54.54,45.535,533.45};
	char name[] ={'A', 'B', 'C', 'D', 'E'};
	cout<<"NAME";
	cout.width(7);
	cout<<"CODE";
	cout.width(7);
	cout<<"COST";
	cout<<endl;
	for(int i=0;i<20;i++){
		cout<<"_";
	}
	cout<<endl;
	for(int i=0;i<5;i++){
		
		cout<<name[i];
		
		cout.width(10);
		cout<<code[i];
		
		cout.width(10);
		cout<<cost[i]<<endl;
	}
	
	for(int i=0;i<20;i++){
		cout<<"_";
	}
	return 0 ;
	
}
