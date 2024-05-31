#include <iostream>
using namespace std;

int main(){
	cout << "In this program we'll be learning arrays" << endl;
	char arr[] = {};
	
	for(int i = 0; i < 5; i++) {
		cout << "Enter name of student " << i+1 << endl;
		
		cin >> arr[i];
	}
	
	for(int i = 0; i < 5; i++) {
		cout << arr[i];
	}
	
	return 0;
}