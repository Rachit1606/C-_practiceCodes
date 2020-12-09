#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	string s1("12345");
	string s2("abcde");
	
	cout<<"original string are: "<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;
	
	cout<<"place s2 in s1";
	
	s1.insert(4,s2);
	
	cout<<s1<<endl;
	
	cout<<"erase characters "<<endl;
	s1.erase(3,5);
	cout<<s1<<endl;
	
	cout<<"replace char in strings "<<endl;
	s2.replace(1,3,s1);

	cout<<s2<<endl;
	
	cout<<"size of s1 is "<<s1.size()<<endl;
	cout<<"length of s1 is "<<s1.length()<<endl;
	cout<<"capacity of s1 is "<<s1.capacity()<<endl;
	cout<<"max size of s1 is "<<s1.max_size()<<endl;
	
	
	return 0;
}
