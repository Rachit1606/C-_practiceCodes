#include<iostream>
using namespace std;

class  item{
	int number;
	float cost;
	
	public: 
		void getdata(int a , float b);
		void putdata(void){
			cout<<number<<endl;
			cout<<cost<<endl;
		}
};

void item:: getdata(int a, float b){
	number= a;
	cost = b;
	
}
int main(){
	item x;
	x.getdata(100,299.5);
	x.putdata();
	
	return(0);
}
