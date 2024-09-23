#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream file1("file1.txt");
	ofstream file2("file2.txt");
	file2.close();
	
	char file1Content[] = "Hello World";
	file1 << file1Content;
	file1.close();
	
	fstream file1Read("file1.txt", ios::in | ios::out);
	fstream file2Read("file2.txt", ios::in | ios::out);
	
	char content[100];
	char line[100];
	
	while(file1Read.getline(line, 100, '\n')) {
		content = content + line + '\n';
	}
//	It will print text in positive direction
	for(int i = 0; i < 100; i++) {
		cout << content[i];
	}
	
	
	
	
	return 0;
}
