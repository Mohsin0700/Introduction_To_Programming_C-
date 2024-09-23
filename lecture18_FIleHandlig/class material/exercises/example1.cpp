#include <iostream>
#include <fstream>
using namespace std;

int main(){
//	Class 18 Example 1
	char singleLine[100];
	char *tokPtr;
	int salary;
	int totalSalary = 0;
	
	
	ifstream myFile("sample1.txt", ios::in);
	if(!myFile) {
		cout << "Something went wrong while opening sample file";
	}
	
	while(!myFile.eof()) {
		myFile.getline(singleLine, 100);
		cout << tokPtr << ",";
		
	}
	
//	cout << "Total salary is" << totalSalary;
//	myFile.close();
	return 0;
}
