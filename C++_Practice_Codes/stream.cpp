#include<iostream>
#include<string.h>
using namespace std;
int main(){
char * String1 = "Rachit";
char * String2 = "Khanna";

int m = strlen(String1);
int n = strlen(String2);

for (int i=1;i<=m;i++){
	cout.write(String1,i);
	cout<<endl;
}


for (int i=n;i>=1;i--){
	cout.write(String1,i);
	cout<<endl;
}

cout.write(String1,m).write(String2,n);
cout<<endl;
cout.fill('*');
cout.width(10);
cout<<String1<<endl;

float a=1.234567;
cout.precision(3);
cout<<a<<endl;
return 0;
}
