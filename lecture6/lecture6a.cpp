#include <iostream>
using namespace std;

main(){
//	cout << "Programm chal gaya";
////	Finding even and odd number without built-in methods...
//	
//	int userInput;
//	cout << "Please enter any number to check wheather a number is even or odd!";
//	cin >> userInput;
//	
//	if(2*(userInput/2) == userInput) {
//		cout << "Given number is even";
//	} else if(2*(userInput / 2) != userInput) {
//		cout << "Given number is odd";
//	}

//	Finding the factorial

	int factorial = 1;
	int number;
	cout << "Please enter any number to get it's factorial" << "\n";
	cin >> number;
	while(number >= 1) {
		factorial *= number;
		number -= 1;
	}
	cout << "Hence, the factorial of a given number is: " << factorial;
}