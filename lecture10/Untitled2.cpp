#include <iostream>
using namespace std;

showNum(int num){
	if(num > 1) {
		cout << "Current number is" << num << "\n";
		int n = num--;
		showNum(n);
	} 
	cout << "Function has been ended";
	return num;
}

main(){
	cout << "Function is working properly" << "\n";
	showNum(5);
}