#include <iostream>
using namespace std;

main(){
	int nums[3][3] = {{2,4,6}, {1,3,5}, {3, 9, 2}};
	
	cout << "Original Matrix" << endl;
		for(int i = 0; i < 3; i++) {	 	
		for(int j = 0; j < 3; j++) {
			cout << nums[i][j] << "\t";
		}
		cout << endl;
	}
	
	
	for(int i = 0; i < 3; i++) {
		for(int j = i+1; j < 3; j++) {
			int temp = nums[i][j];
			nums[i][j] = nums[j][i];
			nums[j][i] = temp;
		}
	}
	cout << "Transpose Matrix" << endl;
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout << nums[i][j] << "\t";
		}
		cout << endl;
	}
	
	cout << "Reverse Row Matrix" << endl;
	
	for(int i = 2; i >= 0; i--) {	 	
		for(int j = 0; j < 3; j++) {
			cout << nums[i][j] << "\t";
		}
		cout << endl;
	}
	
	cout << "Reverse Column Matrix";
	cout << endl;
	
	for(int i = 0; i < 3; i++) {
		for(int j = 2 ; j >= 0; j--) {
			cout << nums[i][j] << "\t";
		}
		cout << endl;
	}
}