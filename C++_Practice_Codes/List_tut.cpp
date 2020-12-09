#include<iostream>
#include<list>
#include<cstdlib>// for using rand function

using namespace std;

void display(list<int> &lst){
	list<int>:: iterator p;
	
	for(p = lst.begin(); p!=lst.end();++p){
		cout<<*p<<" ";
	}
	cout<<endl;
}

int main(){
	list<int> lst1;
	list<int> lst2(5);
	for(int i=0;i<3;i++){
		lst1.push_back(rand()/100);
	}
	list<int>::iterator p;
	for(p=lst2.begin(); p!=lst2.end();++p){
		*p = rand()/100;
	}
	cout<<"Display List 1 "<<endl;
	display(lst1);
	cout<<"Display List 2"<<endl;
	display(lst2);
	//add elements to list 1 in end;
	lst1.push_front(100);
	lst1.push_back(200);
	//remove front elements from list 1
	lst1.pop_front();
	
	cout<<"List 1"<<endl;
	display(lst1);
	cout<<"List 2"<<endl;
	display(lst2);
	
	list<int> ListA , ListB;
	
	ListA=lst1;
	ListB=lst2;
	
	//merge 2 list
	
	lst1.merge(lst2);
	cout<<"Merged List"<<endl;
	display(lst1);
	
	//sort and merging
	
	ListA.sort();
	ListB.sort();
	ListA.merge(ListB);
	cout<<"Merge Sorted List "<<endl;
	display(ListA);
	
	//reverse A list
	ListA.reverse();
	cout<<"Reversed List Is"<<endl;
	display(ListA);
	
	cout<<"END"<<endl;
	return 0;
	
}
