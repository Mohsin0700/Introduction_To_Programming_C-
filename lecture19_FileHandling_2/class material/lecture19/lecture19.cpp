//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main(){
////	Rivision lecture number 18
////	ifstream fileIn1;
////	fileIn1.open("fileIn1.txt");
////	
////	if(!fileIn1) {
////		cout << "File couldn't be opened";
////	}
////	
////	while(!fileIn1.eof()) {
////		char ch;
////		fileIn1.get(ch);
////		cout << ch;
////	}
////	fileIn1.close();
////	
////	ofstream outFile1("outFile1.txt", ios::out);
////	outFile1 << "Hellow, this is very first file written by stream library";
////	outFile1.close();
////	
////	ofstream outFile2("fileIn1.txt", ios::out);
////	outFile2 << "The data written in fileIn1 one has been changed by this line ";
////	outFile2.close();
////	
////	
////	ofstream outFile3("fileIn1.txt", ios::app);
////	outFile3 << "Now this line will be added after above line";
////	**************************************************************************************
////								Lecture Number #19
//
////ifstream fileIn1("fileIn1.txt");
////if(!fileIn1) {
////	cout << "Something went wrong";
////}
////
////long ptrPosition = fileIn1.tellg();
////cout << ptrPosition;
////
////
////ofstream outFile1("")
////	to find length of a program
//	
////	int length;
////	ifstream myFile("fileIn1.txt");
////	myFile.seekg(0L, ios::end);
////	length = myFile.tellg();
////	cout << "Length of fileIn is: " << length;
//	
////	ifstream myFile;
////	myFile.open("fileIn1.txt");
////	
////	if(!myFile) {
////		cout << "Something went wrong";
////		exit(1);
////	} 
////	
////	while(!myFile.eof()) {
////		char thisLine[100];
////		myFile.getline(thisLine, 100, '\n');
////		cout << thisLine;
////	}
//	
////	HOW TO USE SEEKG AND SEEKP FUNCTIONS
//	ifstream myFile;
//	myFile.open("fileIn1.txt");
//	
//	if(!myFile) {
//		cout << "File could'nt be opened";
//		exit(1);
//	}
//	
////	myFile.seekg(11, ios::beg);
////	while(!myFile.eof()) {
////		char newPara[100];
////		myFile.getline(newPara, 100);
////		cout << newPara;		
////	}
////	myFile.seekg(0, ios::end);
////	long length;
////	length = myFile.tellg();
////	cout << length;
//
//
//	myFile.close();
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	return 0;
//}
