#include <iostream>
#include <iomanip>
using namespace std;

int main(){
//	cout << "File is working well" << endl;
//	cout.setf(ios::left, ios::adjustfield);
////	It sets the field
////	cour.setf(ios::hex);	It converts a number to hexadecimal
//	cout.setf(ios::showbase);
//	cout << oct << 10 << endl;
//	cout << hex << 10 << endl;
//	int i = -1234;
//	cout.setf(ios::left,ios::adjustfield);
//	cout << "|" << setw(12) << i << "|" << endl;
//	cout.setf(ios::right, ios::adjustfield);
//	cout << "|" << setw(12) << i << "|" << endl;
//	cout.setf(ios::internal, ios::adjustfield);
//	cout << "|" << setw(12) << i << "|" << endl;
//	cout.setf(ios::left | ios::right, ios::adjustfield);
//	cout << "|" << setw(12) << i << "|" << endl;




	int num1 = 1000000000000000;
	cout.setf(ios::scientific, ios::floatfield);
	cout << num1 << endl;
	return 0;
}
