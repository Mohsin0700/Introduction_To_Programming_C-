#include <iostream>
using namespace std;

main(){
//	We use arrays in almost all the programming languages.In some programming languages, array is known by a different keyword called list.
//	Here, we declared an array whose type is int and name is age.
//	The number which is writter in square brackets during decleartion is denoting length of an array.
//  As we know that the first value of an array starts from zero, so we are string 5 integers values into this array according to their indexes respectively.

	int age[5];
	age[0] = 5;
	age[1] = 45;
	age[2] = 54;
	age[3] = 1;
	age[4] = 36;
	
//	Here, we are printing all the values using for loop;
	
	for(int i = 0; i<5; i++) {
		cout << age[i] << endl;
	}
	
//	Here is a little bit difference in declaring and initializing an array between c++ and other languages.
//  we use square brackets in other programming languages
//  we use curly brackets in c++.
//	we also tell the length of an array and it's element
	char names[3][10] = {"mohsin","arbab","ali"};
	
		for(int i = 0; i<3; i++) {
		cout << names[i] << endl;
	}
	
	char students[][15] = {};
	
	for(int i = 0; i < 5; i++) {
		cin >> students[i];
		cout << students[i] << endl;
	}
	
	for(int i = 0; i<5; i++) {
		cout << students[i] << endl;
	}
	
	
	
}