#include <iostream>
#include <fstream>
using namespace std;

int main(){
	char var1[100];
	char var2[100];
	char var3[100];
	ifstream myInfo;
	myInfo.open("myInfo.text");
	myInfo >> var1 >> var2 >> var3;
	cout << var1 << var2 << var3 << endl;
	return 0;
}