#include <iostream>
#include <fstream>
using namespace std;

int main(){
//	ifstream inFile;
//	ofstream outFile;
//	
//	inFile.open("sample1.txt");
//	if(!inFile) {
//		cout << "File couldn't be opened, there is some error";
//	} else {
//		cout << "File has been opened";
//	}
//	char c1,c2,c3,c4,c5;
//	inFile >> c1 >> c2 >> c3 >> c4 >> c5;
//	inFile.close();
//	cout << c1 << c2 << c3 << c4 << c5;

//*************************************************************************************************************************************	
//	Book example #01:
//	ifstream myFile;
//	myFile.open("example1.txt");
//	
//	if(!myFile) {
//		cout << "There is an error in opening this file, please try again or trouble shoot a problem" << endl;
//	} else {
//		cout << "File has been opened successfully" << endl;
//	}
//	
//	char name[30];
//	char salary[20];
//	char department[30];
//
//	while(!myFile.eof()) {
//		myFile >> name >> salary >> department;
//		cout << name << "\t" << salary << "\t" << department << endl;
//	}
//	myFile.close();
//**************************************************************************************************************************************
//	Book Example #02
	
//	ofstream fileOut;
//	fileOut.open("sample2.txt");
//	char outputText[] = "Welcome to virtual university of Pakistan";
//	
//	fileOut << outputText;
//	fileOut.close();
//	
//	ifstream readFile;
//	char c;
//	
//	readFile.open("sample2.txt");
//	
//	while(!readFile.eof()) {
//		 readFile >>c;
//		 cout << c;
//	}
//	readFile.close();
//**************************************************************************************************************************************
//	USAGE OF GET FUNCTION 

//	ifstream myFile("sample2.txt");
//	char c;
//	while((c = myFile.get()) != EOF) {
//		cout << c;
//	}
//	myFile.close();

//*************************************************************************************************************************************
//	INLINE FUNCTION
//ifstream inFile("sample3.txt");
//
//int maxChar = 100;
//char name[maxChar];
//int stopChar = 'd';
//
////inFile.getline(name, maxChar, stopChar);
//inFile.getline(name, maxChar);
//cout << name;
//***************************************************************************************************************************************
//	Exercise#01

//	char fileName[] = "example1.txt";
//	char thisLine[100];
//	ifstream myFile(fileName);
//	while(!myFile.eof()) {
//		myFile.getline(thisLine,1000);
//		cout << thisLine << endl;
//	}

//	Exercise#02

	char thisLine[100];
	
	char *salary;
	
	fstream inFile("example1.txt");
	
	while(!inFile.eof()){
		inFile.getline(thisLine, 1000);
		salary = strtok(NULL, " ");
		cout << salary << endl;
	}

















	return 0;
}
