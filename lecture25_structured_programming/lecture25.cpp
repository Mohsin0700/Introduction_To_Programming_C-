#include <iostream>
using namespace std;


	void sq(int x = 4,int n = 2) {
		cout << x * n << endl;
	}

int main(){
//	Default functions
	sq();
	sq(5);
	return 0;
}
