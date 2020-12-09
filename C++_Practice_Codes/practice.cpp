#include<iostream>
using namespace std;

class calci
{
	public:
		int a,b;//temp ko yaha likhne ki zaroorat nhi thi na hi declare krne ki its a temporary variable
		public://yeh kisne karna tha tera saare function private the mata koi bhi call nhi hona thaaa
		void readdata()
		{
			cin>>a;
			cin>>b;//>>temp; na hi read krne ki
		}
		void displaydata()
		{
			cout<<a<<endl;
			cout<<b<<endl;
			//cout<<temp;
		}
		void swap()//mata variabledeclare krne hote jo aapko function mai chahiye bahar se aise nhi aajayenge vo
		{
			int temp;//temp yaha likh
			temp = a;
			a = b;
			b = temp;
			//return a,b; yeh maily ek hi variable return krta isliye isko bas return krwa upar void kiya hai maine
		}
};
int main()
{
	calci c1;	
	c1.readdata();
	cout<<"before swap"<<endl;
	c1.displaydata();//yeh display function isi ke liye jo kiya hai show krne ko ki kya kiya hai humne
	c1.swap();//swap ko as a function use kr usse return na krrwaa chahe
	cout<<"After Swap"<<endl;
	c1.displaydata();
	return 0;
}
