#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
	ifstream myFile("myFile.txt");
	ofstream scrn, prnt;
	
	char c;
	
	if(!myFile) {
		cout << "Something went wrong";
		return 1;
	}
	
	scrn.open("Console.txt", ios::out);
	
	while(myFile.get(c)) {
		scrn << c;
	}
	scrn.close();
	
	myFile.seekg(0, ios::beg);
	
	cout << "File is working";
	
	prnt.open("LPT1.txt", ios::out);
	
	while(myFile.get(c)) {
		prnt << c;
	}
	prnt.close();
	
	
	return 0;
}
