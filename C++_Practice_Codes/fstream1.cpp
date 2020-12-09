#include<iostream>
#include<fstream>

using namespace std;

int main(){
	
	ofstream outf("ITEM");
	int cost;
	char name[30];
	cin>>name;
	cin>>cost;
	outf<<name<<endl;
	outf<<cost<<endl;
	
	outf.close();
	
	ifstream inf("ITEM");
	
	inf>>name;
	inf>>cost;
	
	cout<<name<<endl<<cost<<endl;	
	inf.close();
	
	ofstream F;
	F.open("cost.txt");
		F<<"Delhi"<<endl;
		F<<"london"<<endl;
	F.close();
	const int N=80;
	char line[N];
	ifstream Fuck;
	F.open("cost.txt");
		while(Fuck){
		
		Fuck.getline(line,N);
		cout<<line<<endl;
	}
	return 0;	
}
