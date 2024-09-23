#include <iostream>
using namespace std;
#define SQUARE(X) X*X
#define PI 3.14159
#define CIRCLEAREA(X) (PI*(X)*(X))

int main(){
	cout << SQUARE(5) << endl;
	float radius;
	cout << "Please enter radius of a circle" << endl;
	cin >> radius;
	cout << "Radius of a circle is: " << radius << endl;
	cout << "Area of a circle is: " << CIRCLEAREA(radius) << endl;
	return 0;
}
