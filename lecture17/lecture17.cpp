#include <iostream>
#include <ctype.h>
#include <stdio.h>
using namespace std;

//int main(){
////	char c;
////	for(int i = 0; i < 256; i++) {
////		c = i;
////	}
////		cout << i <<  '\t' << c << endl;
//
////	String Built-In Methods
//char c;
//cout << "Please enter any keyword" << endl;
//cin >> c;
////cout << isdigit(c) << endl;
////cout << isalpha(c) << endl;
////cout << isalnum(c) << endl;
////cout << islower(c) << endl;
////cout << isupper(c) << endl;
//
////char cvrt = tolower(c);
//char cvrt = toupper(c);
//cout << cvrt << endl;
//
//
//}

//	Sample Program
int main(){
	char c;
	int i = 0, lc = 0, uc = 0, ws = 0, dig = 0, punc = 0, oth = 0;
	
	cout << "Please enter a character string and then press ENTER: ";
	while(getchar() != '\n') {
		c = getchar();
		if(islower(c)) {
			lc++;
		} else if(isupper(c)) {
			uc++;
		} else if(isdigit(c)) {
			dig++;
		} else if(isspace(c)) {
			ws++;
		} else if(ispunct(c)) {
			punc++;
		} else {
			oth++;
		}
	}
	
	cout << "You typed:"<< endl; 
	cout<< "lower case letters = "<< lc<< endl; 
 	cout << "upper case letters = " << uc <<endl;
	cout<< "digits = " << dig << endl;
	cout<< "white space = "<< ws << endl;
	cout<< "punctuation = "<< punc<< endl;
	cout<< "others = "<< oth; 
	
	return 0;
}