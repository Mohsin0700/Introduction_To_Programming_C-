#include <iostream>
using namespace std;

int main(){
	int number = 12;
	if(number & 0x8)
	 cout << "Bit number four is set" << endl;
	else 
	cout << "Bit number four is not set" << endl;
	
//	int x = 8 | 12;
//	cout << x;

//	int x = 8 ^ 6;
//	cout << x;


//	swapping values using exclusive or in bit manupilation

	unsigned int n1 = 7;
	unsigned int n2 = 18;
	
	n1 = n1 ^ n2;
	n2 = n2 ^ n1;
	n1 = n1 ^ n2;
	cout << n1 << endl;
	cout << n2 << endl;
	
	return 0;
}
	