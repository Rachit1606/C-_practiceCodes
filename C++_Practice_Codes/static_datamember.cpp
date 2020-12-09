#include<iostream>
using namespace std;

class item 
{
	static int count;
	int number;
	public:
		void getdata(int a){
			number = a;
			count++;
		}
		void getcount(void){
			cout<<"count : "<<count<<endl;
		}
		static void showcount(void){
			cout<<count<<endl;
		}
};

int item:: count;

int main(){
	item a , b;
	a.getcount();
	b.getcount();
	
	a.getdata(100);
	b.getdata(69);
	cout<<"After Getting Data"<<endl;
	item :: showcount();	
	a.getcount();
	b.getcount();
	return (0);
}
