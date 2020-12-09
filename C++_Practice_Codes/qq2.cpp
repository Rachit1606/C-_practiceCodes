#include<iostream>
using namespace std;

class complex
{
	float x;
	float y;
	public: 
		complex(){
		}
		complex(float real,float imag){
			x=real;
			y=imag;
		}
		complex operator+(complex);
		void display(){
			cout <<x<<" + i"<<y<<endl;
		}
};
complex complex :: operator+(complex c)
{
	complex temp;
	temp.x = x + c.x;
	temp.y = y + c.y;
	return temp;
}
int main(){
	complex c1,c2,c3;
	c1=complex(2.5,3.5);
	c2 = complex(1.8,2.8);
	c3 = c1+c2;
	return(0);
}
