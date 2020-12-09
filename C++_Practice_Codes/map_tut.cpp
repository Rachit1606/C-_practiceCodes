#include<iostream>
#include<string.h>
#include<map>

using namespace std;
int main(){
typedef map<string,int>phoneMap;

string name;
int number;
phoneMap phone;

cout<<"enter the sets of number"<<endl;

for(int i=0;i<3;i++)
{
	cin>>name;
	cin>>number;
	phone[name]=number;
}
//insert single one
phone["jacob"]=4444;

phone.insert(pair<string,int>("bose",1111));
int n=phone.size();
cout<<"size of map are"<<n<<endl;

//display;
phoneMap:: iterator p;
for(p=phone.begin();p!=phone.end();p++){
	cout<<(*p).first<<"  "<<(*p).second<<endl;
}

cout<<"enter name:  ";
cin>>name;
cout<<"Phone number is ";
cout<<phone[name]<<endl ;

return 0;
}


