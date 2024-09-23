#include <iostream>
using namespace std;

int main(){
//	Default paramter functions...
	int square(int x = 2, int y = 3);
//	Function overloading
	int sqrt(int x);
	double sqrt(double y);
//	both above functions have same name but they will be considered different in c++ because their arguements are different which are being passed...
	return 0;
}
