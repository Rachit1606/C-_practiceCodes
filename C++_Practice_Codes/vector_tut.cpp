#include<iostream>
#include<vector>

using namespace std;

void display(vector<int>&v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main(){
	vector<int> v;
	
	cout<<"Initial Size "<<v.size()<<endl;
	//Putting values in the vector
	int x;
	for(int i=0;i<5;i++){
		cin>>x;
		v.push_back(x);
	}
	cout<<"Size of elements now"<<endl;
	cout<<v.size()<<endl;
	//Display
	cout<<"Display Contents"<<endl;
	display(v);
	
	//insert one more
	v.push_back(6.6);
	//display size and contents
	cout<<"Size of vector"<< v.size()<<endl;
	cout<<"Display Contents "<<endl;
	display(v);
	
	//insert elements in array
	vector<int>:: iterator i = v.begin();
	i=i+3;
	v.insert(i,1,9);
	
	//display
	cout<<"Display contents"<<endl;
	display(v);
	
	//remove elements
	
	v.erase(v.begin()+3,v.begin()+5);
	
	//display
	cout<<"Display Contents"<<endl;
	display(v);
	
	cout<<"end";
	return 0;
}

