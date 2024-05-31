#include <iostream>
using namespace std;
//#define pi 3.1415926

double square(double& n) {
	return n * n;
}	

 main(){
	cout << "Program is working well" << "\n";
//	cout << pi;
	double storedNum = 6.5;
	
//	cout << "Function calling by value " << square(storedNum) << "\n";
//	cout << "Origional Variable is being called " << storedNum;
//	cout << "Space" << "\n";
	cout << "Fucntion calling by reference " << square(storedNum) << "\n";
	cout << "The current value of number is still " << storedNum << "\n";
	
	square(storedNum);
	cout << "Now, the value of current number is: " << storedNum;
}

