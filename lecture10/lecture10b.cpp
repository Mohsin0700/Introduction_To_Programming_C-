#include <iostream>
using namespace std;
#define pi 3.1415926
//int f(int& i);
int f(int *i);
void recursiveFunc(void);

main(){
//	cout << "program is working well" << "\n ";
//	cout << pi << "\n";
//	int i = 10;
//	cout << "In main i = " << i << "\n";
//	f(&i);
//	cout << "Back in main, i = " << i << "\n";

recursiveFunc();
}

//int f(int *i) {
//	cout << "In function f, i = " << i << "\n";
////	i *= 2;
//	*i = *i + 2;
//	cout << "In function f, i is now = " << i << "\n";
////	return i;
//	return *i;
//}

void recursiveFunc(){
	int n = 0;
	if(n >= 5) {
		return;
	}
	cout << "Current number of n is: " << n << "\n";
	n++;
	recursiveFunc();
}