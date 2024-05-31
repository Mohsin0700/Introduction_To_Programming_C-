#include <iostream>
using namespace std;

int square(int *n){
	*n = *n * *n;
	return *n;
}



main(){
	int x = 2;
	cout << "Current value of x is " << x << "\n";
	cout << "return from function square: " <<  square(&x) << endl;
	cout << "Current value of x is " << x << "\n";
}