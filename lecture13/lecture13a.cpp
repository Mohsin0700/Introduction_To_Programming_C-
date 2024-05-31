#include <iostream>
using namespace std;

int main(){
	int row;
	int col;
	int maxRows = 3;
	int maxCols = 3;
	int arr[maxRows][maxCols] = {{2,4,6}, {1,3,5},{9,8,7}};

	
	cout << "Original Array" << endl;
	for(row = 0; row < maxRows; row++) {
		for(col = 0; col < maxCols; col++) {
			cout << arr[row][col];
		}
		cout << endl;
	}
	
//	{2,4,6}
//  {1,3,5}
//	{9,8,7}
	
	cout << "Transposed Array" << endl;
	for(row = 0; row < maxRows; row++) {
		for(col = 0; col < maxCols; col++) {
			int x = arr[row][col];	// 4 target kiya x mn store kiya
			arr[row][col] = arr[col][row];	// 1 ko target kiya 04 ki jga rkhdya
			arr[col][row] = x;
			cout << arr[row][col] << "\t";
		}
		cout << endl;
	}
	
	

	
	
	
	
	
	
	return 0;
}