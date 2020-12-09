#include<iostream>
using namespace std;

class B{
	int a;
	public: 
	int b;
	public:
	void get_ab(){
		a=5;
		b=10;
	}
	int get_a(){
		return a;	
	}
	void show_a(void){
		cout<<"a = "<<a<<endl;
	}
};

class D : public B{
	int c;
	public: 
		void mul(){
			c= b*get_a();
		}
		void display(){
		cout<<"c = "<<c<<endl;
	}
};
int main()
{
	D d;
	d.get_ab();
	d.get_a();
	d.mul();
	d.display();
	return 0;
}
