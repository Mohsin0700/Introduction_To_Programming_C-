#include <iostream>
using namespace std;

int main(){
//	The name of the array is like a pointer which contain the address of the first element
//	It is different from ordinary pointer because it's a constant pointer because it does not
//	point on any other address and it only points to first element address 
//	Declaration of pointer variable

//	int y[10] = {1,2,3,4,5,6,7,8,9};
//	int *yptr; // we read it as yptr is a pointer to integer(right to left)
//	yptr = y;
//	cout << y[3] << endl;
//	cout << yptr[3+2] << endl;
//	cout << yptr << endl;
//	cout << *yptr << endl;
//	yptr++;
//	cout << *yptr << endl;


//	We can't write
//	yptr = &y because it will give multiple addresses since we can write
//	yptr = &y[0];
//	cout << yptr << endl;

//	int x = 10;
//	int *yptr;
//	yptr = &x;
//	cout << yptr << endl;
//	cout << *yptr << endl;
//	*yptr + 3;
//	cout << yptr << endl;
//	Strings are stored in arrays not in a single variable in c...
//	Null character '|0' is used to end string in c and c++
//	Single qoutes only store single character, use dobule qoutes to store multiple chars.
//	char name[] = "Mohsin";
//	cout << name << endl;
	
	char name1[20] = "Hafiz Mohsin";
	cout << "String-1 is " << name1 << endl;
	char name2[20];
	cout << "String-2 is " << name2 << endl;
	char *ptrA, *ptrB;
	ptrA = name1;
	cout << "ptrA is " << ptrA << endl;
	ptrB = name2;
	cout << "ptrB is " << ptrB << endl;
	
	
	while(*ptrA != '\0') {
		cout << "Value of ptrA is: " << ptrA << endl;
		*ptrB++ = *ptrA++;
	} 
	cout << "Value of ptrB points to is: " << endl;
	cout << ptrB << endl;
	return 0;	
}