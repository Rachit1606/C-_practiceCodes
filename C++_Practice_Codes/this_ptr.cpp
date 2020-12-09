#include<iostream>
#include<cstring>

using namespace std;

class person{
	char name[20];
	float age;
	public:
		person(char *s , float a){
			strcpy(name, s);
			age = a;
		}
		person & person:: greater(person &x){
			if(x.age>=age)
				return x;
			else 
				return *this;
		}
		void display(){
			cout<<name<<endl;
			cout<<age<<endl;
		}
};

int main()
{
	person p1("john",37.0), p2("ahmed",29.5), p3("sddsad",40.45);
	person P = P1.greater(P3);
	P.display();
	return 0;
}
