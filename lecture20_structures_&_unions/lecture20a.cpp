#include <iostream>
using namespace std;


int main(){
	union intOrChar {
		int iVal = 5;
		char cVal = '5';
	};
	
	cout << intOrChar.iVal << endl;
	cout << intOrChar.cVal << endl;
}
