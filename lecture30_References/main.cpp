#include <iostream>
using namespace std;

void swap(int &x, int &y);

int main(){
//	Example #01
//	int i;
//	int &j = i;
//	int k = i;
//	i = 123;
//	cout << i << endl;
//	cout << j << endl;
//	i++;
//	cout << i << endl;
//	cout << j << endl;

	int x, y;
	x = 10;
	y = 20;
	cout << "Value of x is: " << x << " and value of y is: " << y << endl;
	
//	swap(&x, &y); // call by reference using pointer
	swap(x,y); // simply call using a function which recieves references of integers...
	cout << "Now the value of x is: " << x << " and value of y is: " << y << endl;
	
	return 0;
}
//	swap using pointers...
//void swap(int *x, int *y) {
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}

void swap(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}