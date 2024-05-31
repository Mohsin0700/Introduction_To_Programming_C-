#include <iostream>
using namespace std;

int squareToNum(int *n) {
	*n *= *n;
}

int main(){
	int number = 4;
	cout << "Current value of num is: " << number << endl;
	squareToNum(&number);
	cout << "Current value of num is: " << number << endl;
	return 0;
}