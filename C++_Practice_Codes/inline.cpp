#include<iostream>
using namespace std;
inline int largest(int x,int y,int z){
	if(x>y&&x>z){
		return x;
	}
	else if (y>x&&y>z){
		return y;
	}
	else{
		return z;
	}
}
inline int add(int a, int b)
{
	return(a+b);
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	cout<<largest(a,b,c)<<endl;
	cout<<add(a,b)<<endl;
	return(0);
}

