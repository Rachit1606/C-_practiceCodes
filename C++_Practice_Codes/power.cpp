#include<iostream>
using namespace std;

double power(double x, int y){
	for(int i=1;i<y;i++){
		x=x*x;
	}
	return x;
}
int main(){
	int n;
	double m;
	cin>>m;
	cin>>n;
	cout<<power(m,n);
	return(0);
}
