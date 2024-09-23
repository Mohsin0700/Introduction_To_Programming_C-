#include <iostream>
#include <fstream>
using namespace std;

int main(){
	//	Copying a file...
//	ifstream fileIn("fileIn1.txt");
//	ofstream fileOut("fileIn1Copy.txt", ios::app);
//	
//	while(!fileIn.eof()) {
//		char c;
//		fileIn.get(c);
//		fileOut.put(c);
//	}
//	
//	fileIn.close();
//	fileOut.close();

//	Editing / updating a file
//	fstream myFile("fileIn2.txt", ios::in | ios::out);
//	
//	while(!myFile.eof()) {
//		char c[100];
//		myFile.getline(c, 100);
//		cout << c;
//	}
//	
//	long position = myFile.tellp();
//	
//	cout << endl << position << endl;
//	myFile.seekp(position-5);
//	
//	position = myFile.tellp();
//	cout << position << endl;
//	
//	myFile.write("sam", 4);
//	
//	while(!myFile.eof()) {
//		char c[100];
//		myFile.getline(c, 100);
//		cout << c;
//	}
 long pos;
 ofstream outfile;
 outfile.open ("test.txt"); // Open the file
 outfile.write ("This is an apple",16); // Write the string in the file
 pos = outfile.tellp(); // Get the File pointer position
 outfile.seekp (pos-7); // Move 7 positions backward
 outfile.write ("sam",4); // Write 4 chars in the current position
 outfile.close(); // Close the file
 return 0;
	
}
