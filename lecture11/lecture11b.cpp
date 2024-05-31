#include <iostream>
using namespace std;

main(){
	int userInp, arr[100], found = 0;
	
	for(int i = 1; i <= 100; i++) {
		arr[i] = i;
	}
	
	cout << "Please enter any positive number" << endl;
	cin >> userInp;
	
	for(int i = 1; i <= 100; i++) {
		cout << "User input is : " << userInp << endl;
			cout << "current num is: " << arr[i] << endl;
		
		if(userInp == arr[i] && userInp < 100) {
			found = 1;
			break;
		} else {
			found = 0;
		}
	}
	
	cout << "Value found is: " << found << endl;
	
	if(found == 0) {
		cout << "Sorry try again later";
		
	} else {
		cout << "Congratulations! your number match the correct answer";
	}
}