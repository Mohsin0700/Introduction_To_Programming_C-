#include <iostream>
using namespace std;

int main(){
	int *iPtr = new int;
	*iPtr = 10;
	cout << *iPtr << endl;
	delete iPtr;
	cout << *iPtr << endl;
	
	return 0;
}
