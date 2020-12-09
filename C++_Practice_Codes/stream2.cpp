#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main(){
	char str[80];
	
	cin>>str;
	int len = strlen(str);
	fstream file;
	file.open("TEXT", ios::in | ios::out);
	for(int i=0;i<len;i++){
		file.put(str[i]);
	}
	file.seekg(0);
	
	char ch;
	while(file){
		file.get(ch);
		cout<<ch;
	}
	file.close();
	return 0 ;
	
}
