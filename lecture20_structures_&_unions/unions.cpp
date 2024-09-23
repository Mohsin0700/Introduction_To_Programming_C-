#include <iostream>
using namespace std;

int main(){
	union intOrChar{
		int i;
		char c;
	};
	intOrChar u1;
	u1.i = 10;
	u1.c = 'h';
//	cout << u1 << endl; Incorrect
	cout << u1.i << endl;
	cout << u1.c << endl;
	return 0;
}
