#include <iostream> 
#include<fstream>
#include<string.h>
using namespace std; 
  
int main() 
{ 
    fstream doc;  
    ifstream idoc("file.txt", ios::in);  
    ofstream ofdoc("file2.txt", ios::out | ios::app); 

    if (!idoc.is_open()) {  
        cout << "file not found"; 
    } 
    else { 
        ofdoc << idoc.rdbuf(); 
    } 
    string word; 
    doc.open("file2.txt"); 

    while (doc >> word) { 

        cout << word << " "; 
    } 
  
    return 0; 
} 
