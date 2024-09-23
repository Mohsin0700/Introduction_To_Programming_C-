#include <iostream>
#include <fstream>
using namespace std;


int main(){
	fstream myFile("myFile.txt", ios::in | ios::app);
	fstream newFile("newFile.txt", ios::in | ios::out);
	
	myFile.seekg(-1, ios::end);
	long position = myFile.tellp();
	cout << position;
	
	
	return 0;
}
