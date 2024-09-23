#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream txtFile;
	txtFile.open("txtFile.txt");
	txtFile.close();
	
	fstream myFile("txtFile.txt", ios::in | ios::out);
	char c;
	
	
	if(!myFile) {
		cout << "This file could'nt be opened";
	}
	
	for(c = 'A'; c <= 'Z'; c++) {
		myFile << c;
	}
	cout << "Current pointer position is: " << myFile.tellg() << endl;
	myFile.seekg(8, ios::beg);
	cout << "Current pointer position is: " << myFile.tellg() << endl;
	myFile >> c;
	cout << "Current character is: " << c << endl;
	myFile.close();
	return 0;
}
