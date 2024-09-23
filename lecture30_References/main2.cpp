#include <iostream>
using namespace std;

int main(){
	int i;
	int &refI = i;
	cout << &i << endl;
	cout << &refI << endl;
	
	return 0;
}
