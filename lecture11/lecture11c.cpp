#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(){
//	usage of const keyword
//	int num1 = 5;
//	cout << "value of num1 is: " << num1 << endl;
//	num1 = 10;
//	cout << "value of num1 after modification is: " << num1 << endl;
//	
//	const int num2 = 6;
//	cout << "value of num2 is: " << num2 << endl;
////	num2 = 12; i.e const variable can't be modified.
//	cout << "value of num2 after modification is: " << num2 << endl;

//time_t current_time = time(NULL);
int x = rand() % 6 + 1;
cout << x;
return 0;
}