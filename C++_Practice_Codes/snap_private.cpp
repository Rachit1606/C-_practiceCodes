#include<iostream>
using namespace std;
class c2;
class c1{
	int value1;
	public:
		void intdata(int a){
			value1=a;
		}
		void display(){
			cout<<"value1 "<<value1<<endl;
		}
		friend void exchange(c1 &,c2 &);
};

class c2{
		int value2;
	public:
		void intdata(int a){
			value2=a;
		}
		void display(){
			cout<<"value2 "<<value2<<endl;
		}
		friend void exchange(c1 &,c2 &);	
};

void exchange(c1 &x,c2 &y){
	int temp=x.value1;
	x.value1=y.value2;
	y.value2=temp;
}
int main(){
	c1 A;
	c2 B;
	A.intdata(10);
	B.intdata(20);
	cout<<"values before exchange"<<endl;
	A.display();
	B.display();
	exchange(A,B);
	cout<<"values after exchange"<<endl;
	A.display();
	B.display();
	return 0;
}
