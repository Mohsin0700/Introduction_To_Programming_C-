#include <iostream>
#include <fstream>
using namespace std;

int main(){
	char var1[100];
	char var2[100];
	char var3[100];
	ifstream myFile;
//	ofstream myFile;
	myFile.open("myInfo.txt"); //it used to just read the content of a file / opening mode
	
	if(myFile) {
	myFile >> var1 >> var2 >> var3;
	cout << var1 << " " << var2 << " " << var3;
	} else {
		cout << "Sorry myFile couldn't be open" << endl;
	}
	myFile.close();

//	myFile.open("myInfo.txt", ios::out); // also opening mode
	
//	*******************************************
//	Correct syntax for opening file is
//	fStream fileVar("File Name", mode)
	// ios::in opens the file to read
	// ios::out opens the file and remove its contents if file exists and create a new file if it doen not exists.
	// ios::app when we use this mode it allows us to add some text in the last of file, previous contents does not affected by new contents
	// ios::ate by using this mode we can write anywhere in the whole file instead of last
	// ios::trunc it is the same as just truncating the file like ios::out
	
//	ifstream myFile;
//	myFile.open("myInfo.txt");
//	
//	if(!myFile) {
//		cout << "File couldn't be opened" << endl;
//	} else {
//		cout << "File has been found" << endl;
//	}
//	while(!myFile.eof()) {
//		myFile >> var1;
//		cout << var1 << " ";
//	}
	
}