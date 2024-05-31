#include<iostream>
using namespace std;

main(){
//	\n is used for line breake;
//	\t is used for tab-spaace (known as indentation)
//	cout << "This is a paragraph without indent \n and \t this is a paragraph with indentation";

//	char a[] = "Mohsin";
//	
//	for(int i=0; i < 6 ; i++) {
//		cout << a[i];
//	}

//	int flag = 0;
//	int a[100];
//	int b[100];
//	int c[100];
//	
//	for(int i=0; i<100; i++) {
//		a[i] = i;
//		b[i] = i+2;
//		c[i] = i;
//	}
//	
//	for(int i=0; i<100; i++) {
//		cout << "value of array 'a' is: " << a[i]<< endl;
//		cout << "value of array 'b' is: " << b[i]<< endl;
//	}
//	
//	for(int i=0; i<100; i++) {
//		if(a[i] != c[i]) {
//			flag = 1;
//		}
//	}
//	
//	if(flag == 0) {
//		cout << "both arrays are same";
//	} else {
//		cout << "arrays are different";
//	}
	char names[]= {'M', 'O', 'H', 'S', 'I', 'N'};
//	To get length of an array in C.

	int length = sizeof(names) / sizeof(names[0]);
	cout << "Length of this array is: " << length << endl;
	
	
	for(int i = 0; i < length; i++) {
		cout << names[i];
	}
	
	
	for(int i = length; i >= 0; i--) {
		cout << names[i];
	}
	

	


}