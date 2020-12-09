#include<iostream>
#include<string>
using namespace std;

class bank{
	string name;
	string accountNo;
	string accountType;
	int balance;
	public:
		
	void getDetails(void){
		cout<<"Enter Account Holder Name"<<endl;
		cin>>name;
		cout<<"Enter the account number"<<endl;
		cin>>accountNo;
		cout<<"Enter the Account Type"<<endl;
		cin>>accountType;
		cout<<"Enter Starting balance"<<endl;
		cin>>balance;
	}
	    int deposit(int a){
		balance = balance+a;
		return balance;
	}
	void withdrawAndCheck(int a){
		cout<<"Current Balance is "<<balance<<endl;
		cout<<"Withdrawal Amount is "<<a<<endl;
		balance=balance-a;
		cout<<"New Balance is "<<balance<<endl;
	}
	void displayDetails(){
		cout<<"Account Holder Name is "<<name<<endl;
		cout<<"Account Holder Balance is"<<balance<<endl;
	}
};

int main(){
	bank A,b;
	A.getDetails();
	A.displayDetails();
	cout<<"New Balance is "<<A.deposit(1000)<<endl;
	b.withdrawAndCheck(500);
	b.displayDetails();
	b.getDetails();
	b.displayDetails();
	cout<<"New Balance is "<<b.deposit(1000)<<endl;
	b.withdrawAndCheck(500);
	b.displayDetails();
	return 0;
}
