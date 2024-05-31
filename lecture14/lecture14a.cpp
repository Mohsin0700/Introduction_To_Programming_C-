#include <iostream>
#include <ctype.h>
#include <stdlib.h>
using namespace std;

void convertToUpperCase(char *);

int main(){
//	int arr[] = {2,4,6,8};
//	cout << sizeof(arr) << endl;
//	cout << "adress of array : " << &arr << endl;
//// 	Array stored at first element address... 
//	cout << "adress of first element of array : " << &arr[0] << endl;
//	cout << "adress of second element of array : " << &arr[1] << endl;

//	int x = 10;
//	int y = 10;
//	const ptr which can never be re-write...
//	int *const xptr = &x;
//	xptr = &y;
//	Printing values of a pointer
//	cout << *xptr;
//	Printing address of a pointer
//	cout << xptr;



//	const int *yptr = &y;
//	cout << *yptr << endl;
//	cout << yptr << endl;
//	
//	yptr = &x;
//	cout << yptr << endl;

	
	char note[0];
	cout << "Please enter any small alphabetic string to convert it to uppercase" << endl;
	cin >> note;
	cout << "The string before conversion is: " << "'" << note << "'" << endl;
	convertToUpperCase(note);
	cout << "The string after conversion is: " << "'" << note << "'" << endl;
	return 0;
}

void convertToUpperCase(char *sptr){
		while(*sptr != '\0') {
			if(islower(*sptr)) {
				*sptr = toupper(*sptr);
			}
			sptr++;
		}
}