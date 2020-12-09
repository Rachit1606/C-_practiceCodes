#include<iostream>
using namespace std;

class M{
	protected :
		int m;
		public: 
		 void get_M(int);
};
class N
{
	protected:
		int n;
		public:
			void get_N(int);
};
class P : public M,public N{
	public:
	void display();
};
class add
void M :: get_M(int a){
	m=a;
}
void N :: get_N(int a){
	n=a;
}
void P:: display(){
	cout<<m<<endl;
	cout<<n<<endl;
}
int main(){
	P p;
	p.get_M(5);
	p.get_N(10);
	p.display();
	return(0);
}
