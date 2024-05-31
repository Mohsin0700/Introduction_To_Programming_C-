#include <iostream>
using namespace std;

int main(){
//	char myName[] = "Hafiz Mohsin";
//	When we create an array, the array name, 'myName' in this case, is a constant pointer.
//	The starting address of the memory allocated to string "FullName" becomes the contents of the array name 'myName' and the array name 'myName' can not be assigned any other value.
//	In other words,
//	the location to which array names points to can not be changed.
//	myName = "Muhammad Arbab";
//	char *myNamePtr = "Mohsin Hussain";
//	myNamePtr = "New Name";
//	cout << myName << endl;
//	cout << myNamePtr << endl;
	
//	char multi[5][10];
//	cout << multi << endl;
//	cout << multi + 2 << endl;

	char myNames[3][3] = {{'a', 'b', 'c'}, {'d','e', 'f'}, {'g', 'h', 'i'}};
	char *ptr = myNames[0];
	
//	value printing according to index.	
//	for(int i = 0; i <= 2; i++){
//		for(int j = 0; j <= 2; j++) {
//			cout << myNames[i][j] << endl;
//		}
//	}
	
//	value printing according to pointer.	
	for(int i = 1; i <= 9; i++){
		cout << *ptr << endl;
		*ptr++;
	}

	
	return 0;
}