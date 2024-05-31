#include <iostream>
using namespace std;
void isEven(int);

//double raiseToPow(double x, int pow) {
//	double result = 1.0;
//	int i;
//	
//	for(i = 1; i<= pow; i++) {
//		result = x * i;
//		cout << "Current value is " << result << "\n"; 
//	}
//	
//	cout << "For loop ended " << "\n";
//	cout << "Final result is: " << result << "\n";
//	return result;
//}
//
//int square(int n) {
//	return n * n;
//}
//void checkFunc(){
//	cout << "Function is working properly" << "\n";
//}

main(){
//	checkFunc();
//	int res = square(5);
//	cout << res;
//	cout << "Please enter number: " << "\n";
//	double x;
//	cin >> x;
//	cout << "Please enter power: " << "\n";
//	int i;
//	cin >> i;
//	
//	raiseToPow(x, i);
int n;
cout << "Please enter any number" << "\n";
cin >> n; 
isEven(n);
}

void isEven(int number){
	if(number % 2 == 0) {
		cout << "The given number is even" << "\n";
	} else {
		cout << "The given number is odd";
	}
	
}