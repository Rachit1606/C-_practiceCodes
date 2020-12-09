#include<iostream>
using namespace std;

void readM(int r, int c, int a[][100])
{
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
}

void printM(int r, int c, int a[][100])
{
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
}
int main(){
	int r,c, arr[100][100];
	cout<<"enter the number of rows"<<endl;
	cin>>r;
	cout<<"enter the number of columm"<<endl;
	cin>>c;
	readM(r,c,arr);
	printM(r,c,arr);
	return (0);
}
