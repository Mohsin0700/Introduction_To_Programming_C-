#include <iostream>
using namespace std;

int main(){
//	We use Astrisk sign to use value of a pointer
// 	We use pointer name without any symbol to get the address it points to.
//	We use ampersand operator "&" to parse address of a variable.
	
//	int y[10];
//	int *yptr;
//	yptr = y;
//	cout << *yptr << endl;
//	yptr++;
//	cout << *yptr << endl;
//	yptr++;
//	cout << *yptr << endl;

//	declaring a variable of type int.
//	int x = 10;
//	declaring a pointer of type int.
//	int *yptr;
//	assigning x integer adress to the pointer
//	yptr = &x;
//	Printing address of x integer
//	cout << "Address of integer x before increment: ";
//	cout << yptr << endl;
//	cout << "Address of integer x after increment: ";
//	yptr++;
//	cout << yptr << endl;
//	Printing value of x integer
//	cout << "Value of integer x: ";
//	cout << *yptr + 3 << endl << endl;
//	cout << "Origional value of x is " << x << endl;
	
	int arr[10], *ptr1, *ptr2;
	ptr1 = &arr[0];
	ptr2 = &arr[4];
	cout << "Address, ptr1 locates to is: " << ptr1 << endl;
	cout << "Address, ptr2 locates to is: " << ptr2 << endl;
	cout << "Difference of them is: " << ptr2 - ptr1 << endl;
	return 0;
}