//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main(){
//	ifstream fileIn1("fileIn1.txt");
//	if(!fileIn1) {
//		cout << "Something went wrong";
//		return 1;
//	}
//	
//	fstream fileIn1Copy("fileIn1Copy.txt", ios::in | ios::app);
//		if(!fileIn1Copy) {
//		cout << "Something went wrong";
//		return 1;
//	}
//	
//	
//	while(!fileIn1.eof()) {
//		char thisLine[100];
//		fileIn1.getline(thisLine, 100);
//		cout << "This is file 1 text" << thisLine << "File 1 text ended here" << endl;
//	}
//	
//	cout << "*************************************************************************";
//	cout << "*************************************************************************";
//	
//	
//	while(!fileIn1) {
//		char c;
//		fileIn1.get(c);
//		fileIn1Copy.put(c);
//	}
//	
//	while(!fileIn1Copy.eof()) {
//		char thisLine[100];
//		fileIn1Copy.getline(thisLine, 100);
//		cout << "This is a new file created from 1" << thisLine << "New file ended here";
//	}
//	
//	
//	return 0;
//}
