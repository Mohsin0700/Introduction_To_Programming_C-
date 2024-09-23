#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(){
//	******************************************************************************************************************************
//														First Program
//	******************************************************************************************************************************
//	ifstream readFile;
//	readFile.open("sample.txt", ios::in);
//	if(readFile) {
//		while(!readFile.eof()) {
//			char ch;
//			readFile.get(ch);
//			cout << ch;
//		}
//			readFile.close();
//	}
//	******************************************************************************************************************************
//														Second Program
//	******************************************************************************************************************************
//	char name[50];
//	int salary[10];
//	char dept[30];
//	ifstream inputFile;
//	inputFile.open("employees.txt", ios::in);
//	if(!inputFile) {
//		cout << "File did not found";
//		exit(1);
//	}
//	while(!inputFile.eof()) {
//		char ch;
//		inputFile.get(ch);
//		cout << ch;
//	}
//	inputFile.close();
//	******************************************************************************************************************************
//														Third Program
//	******************************************************************************************************************************
	
//	ofstream outputFile;
//	char outputText[100] = "Today is my last day in MT section garden";
//	outputFile.open("output.txt", ios::out);
//	if(!outputFile) {
//		cout << "File could'nt be opened, somthing went wrong";
//	}
//	
//	outputFile << outputText;
//	outputFile.close();
//	******************************************************************************************************************************
//														Fourth Program
//	******************************************************************************************************************************
		
//	ifstream myFile("sample.txt", ios::in);
//	
//	if(!myFile) {
//		cout << "File could not be opened";
//	}
//	while(!myFile.eof()) {
//		char ch;
//		myFile.get(ch);
//		cout << ch;
//	}
//	ofstream sample2("sample2.txt", ios::out);
//	if(!sample2) {
//		cout << "File could not be opened";
//	}
//	sample2 << "Today, I have watched your name movie";
//	**************************************************
//	GetLine and putLine functions
//	For this example let us create a text file named getLineText and set a sentance in that file which contains "Hello World" text
//	char name[100];
//	int maxChar = 100;
//	int stopChar = 'o';
//	
//	fstream inFile("getLineText.txt", ios::in);
//	inFile.getline(name, maxChar, stopChar);
//	cout << name;
//	******************************************************************************************************************************
//														Example # 01
//	******************************************************************************************************************************
//	ifstream inFile;
//	const int maxChars = 100;
//	char completeLineText[maxChars];
//	
//	inFile.open("example1.txt", ios::in);
//	if(!inFile) {
//		cout << "File does not exists";
//	}
//	while(!inFile.eof()) {
//		inFile.getline(completeLineText, maxChars);
//		cout << "Complete Line Text is: " << completeLineText << endl;
//	}
//	******************************************************************************************************************************
//														Example # 02
//	******************************************************************************************************************************
	ifstream inFile;
	ofstream outFile;
	char completeLineText[100];
	char *tokenPtr;
	int salary = 0;
	int totalSalary = 0;
	
	inFile.open("example2.txt", ios::in);
	outFile.open("example2sol.txt", ios::out);
	
	if(!inFile) {
		cout << "File could not be opened";
	}
	if(!outFile) {
		cout << "File could not be opened";
	}
	
	while(!inFile.eof()) {
		inFile.getline(completeLineText, 100);
		cout << completeLineText << endl;
		tokenPtr = strtok(completeLineText, " ");
		cout << tokenPtr << endl;
		tokenPtr = strtok(NULL, "");
		cout << tokenPtr << endl;
		
		salary = atoi(tokenPtr);
		totalSalary += salary;
		cout << "Total Salary is" << totalSalary << ",";
	}
	
	inFile.close();
	outFile.close();
	
	
	return 0;
}