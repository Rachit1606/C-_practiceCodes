#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char str[] = "Test";
	int len =strlen(str);
	for(int i=0; i<len;i++){
		cout<<str[i]<<i[str]<<*(str+i);
	}
	cout<<endl;
	int lenM= len/2;
	len--;
	for(int i=0;i<lenM;i++){
		str[i]=str[i]+str[len-i];
		str[len-i]= str[i]- str[len=1];
		str[i] = str[i]-str[len-1];
	}
	cout<<str;
	return 0;
}
