#include <iostream>
#include <fstream>
using namespace std;


int main(){
	ifstream myFile;
	ofstream newFile;
	ifstream readNewFile;
	myFile.open("sample.txt", ios::in);
	// Let's say we have a text file which have two words
	//	To store these two words we must create two seperate variables for it
	char var1[100];
	char var2[100];
//	To read a file, 
	if(!myFile) {
		cout << "My File could'nt be opened";
	}
	
	while(!myFile.eof()) {
		myFile >> var1;
		cout << var1 << " ";
	}
	
	myFile >> var1 >> var2;
	myFile.close();
//	newFile.close();
//	cout << var1 << " " <<  var2;
	return 0;
}