#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main(){
//	void *ptr;
//	(int*) ptr;

//	Usage of calloc function
//	int *iPtr;
//	iPtr = (int*) calloc(1000, sizeof(int));
	
//	if(iPtr == NULL) {
//		cout << "We can do any error handling here";
//	}

//	void *ptr;
//	ptr = (int*) malloc(1000*(sizeof(int)));
//	cout << sizeof(ptr);

//	Example
	int stdNum, totalAge, *iPtr, *sPtr;
	cout << "Enter the number of students" << endl;
	cin >> stdNum;
	iPtr = (int*) malloc(stdNum*(sizeof(int)));
	if(iPtr == NULL) {
		cout << "Something went wrong in malloc";
		return 1;
	}
	
	sPtr = iPtr;
	totalAge = 0;
	for(int i = 1; i <= stdNum; i++) {
		cout << "Enter the age of student " << i << ' = ' << endl;
		cin >> *sPtr;
		totalAge = totalAge + *sPtr;
		sPtr++;
	}
	
	cout << "The average age of class is: " << totalAge/stdNum << endl;
	free(iPtr);
	sPtr = NULL;
	
	return 0;
}
