#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream myfile("sample.txt");
	ofstream outputfile;
	char ch;
	char var[100];
	char var1[100];
	char var2[100];
//	myfile.open("sample.txt");
//	outputfile.open("sample1.txt", ios::out);
//	outputfile.put("Hello World");
//	outputfile.close();
//	myfile >> var >> var1 >> var2;
//	cout << var << var1 << var2 << endl;
	while(!myfile.eof()) {
		myfile.get(ch);
		cout << ch;
	}
	myfile.close();
	return 0;
}