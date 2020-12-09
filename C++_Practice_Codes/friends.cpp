#include<iostream>
using namespace std;

class B;
class A{
	public:
	int a;
	void read(int x){
		a=x;
	}
	friend int add(A aa,B bb);
};
class B{
	public:
	int b;
	void read(int y){
		b=y;
	}
	friend int add(A aa,B bb);
};

int add(A aa,B bb){
	int c= aa.a + bb.b;
	return c;
}
int main(){
	A aa;
	B bb;
	aa.read(5);
	bb.read(5);
	cout<<add(aa,bb)<<endl;
	return 0;
}
