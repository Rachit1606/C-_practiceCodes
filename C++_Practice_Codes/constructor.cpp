#include<iostream>
using namespace std;
class example
{
private:
int a;
public:
example(){
	a=0;
}//default Constructor

example(int x)
{
a=x;
} //Parameterized Constructor

example(example &p)
{
a=p.a;
} //Copy Constructor

void display();
};
void example::display()
{
cout<<a;
}
int main()
{
example e1(5);
example e2(e1);
e2.display();
return 0;
}
