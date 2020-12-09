#include<iostream>
using namespace std;

class space
{
	int x;
	int y;
	int z;
	public: 
		void getdata(int a,int b,int c)
		void space operator-();
		
};
void space:: getdata(int a,int b, int c){
	x=a;
	y=b;
	z=c;
	cout<<x<<endl<<t<<endl<<z<<endl;
}
void space:: operator-(){
	x=-x;
	y=-y;
	z=-z;
} 
int main(){
	space s;
	s.getdata(10,-20,30);
	-s;
	return(0);
}
