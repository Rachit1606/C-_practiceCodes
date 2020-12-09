#include <iostream>
#include <fstream>
using namespace std;
int main()
{	
	fstream dataFile;
	char name[81];
	dataFile.open("demofile.txt", ios::in);  
	if (!dataFile)
	{	
		cout << "File open error!" << endl;	
		return 0;
	}
cout << "File opened successfully.\n";
cout << "Now reading information from the file.\n";
	for (int count = 0; count < 4; count++)  
	{	
		dataFile >> name;	
		cout << name << endl;
	}
dataFile.close();
cout << "Done.\n";
return 0;
}

