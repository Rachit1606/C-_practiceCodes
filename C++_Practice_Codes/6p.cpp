#include<iostream>
#include<cstring>
using namespace std;

class city{
	char *name;
	int len;
	public: 
		city(){
			len = 0;
			name = new char[len+1];
		}
		void getname(){
			char *s;
			s= new char[30];
			cout<<"Enter City Name"<<endl;
			cin>>s;
			len = strlen(s);
			name = new char[len+1];
			strcpy(name,s);
			
		}
		void printname(){
			cout<<name<<endl;
		}
};
int main(){
	city *cptr[10];
	int n=1;
	int option;
	do{
		cptr[n]= new city;
		cptr[n]->getname();
		n++;
		cout<<"Enter City Name"<<endl;
		cout<<"(Enter 1 for yes and 0 for no)";
		cin>>option;
		
	}
	while(option);
	
	for(int i=0;i<n;i++){
		cptr[i]->printname();
	}
	return 0;
}
