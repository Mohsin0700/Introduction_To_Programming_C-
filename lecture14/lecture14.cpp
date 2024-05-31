#include <iostream>
using namespace std;

// call by value
//int swapp(int x, int y){
//	int temp = x;
//	x = y;
//	y = temp;
//	cout << "In swapp function value of x is " << x << " and value of y is " << y << endl;
//}

// call by reference
int swapp(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
	cout << "In swapp function value of x is " << *x << " and value of y is " << *y << endl;
}

int main(){
//	cout << "Program is working well" << endl;
//	
//	int anyNum = 66;
//	int *myPtr = &anyNum;
//	cout << *myPtr << endl;

//	int *ptr1, *ptr2, *ptr3;
//	int num1, num2, num3;
//	num1 = 5;
//	num2 = 10;
//	num3 = 15;
//	
//	cout << "Value of num1: " << num1 << endl << "Value of num2: " << num2 << endl << "Value of num3: " << num3 << endl;
//	
//	ptr1 = &num1;
//	ptr2 = &num2;
//	ptr3 = &num3;
//	
//	*ptr1 = 4;
//	cout << "Value of num1: " << num1 << endl;

// Swapping values using call by value...
//	int x = 10;
//	int y = 20;
//	swapp(x, y);
//	cout << "In main function value of x is " << x << " and value of y is " << y << endl;
	
//	swapping call by reference

	int x = 7;
	int y = 16;
	swapp(&x, &y);
	cout << "In main function value of x is " << x << " and value of y is " << y << endl;
	
	
	return 0;
}