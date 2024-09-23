#include <iostream>
using namespace std;

//Friend function prototype...
//ostream& operator<<(ostream& output, Vehicle A);
class Matrix {
	private:
		int rows, cols;
		int elements[3][3];
	public:
		Matrix(int rows = 3, int cols = 3);
		friend ostream& operator<<(ostream& output, Matrix m);
		friend istream& operator>>(istream& input, Matrix &m);
};
ostream& operator <<(ostream& output, Matrix m) {
	for(int i = 0; i < m.rows; i++) {
		for(int j = 0; j < m.cols; j++) {
			output << m.elements[i][j];
		}
	}
	return output;
}

istream& operator>>(istream& input, Matrix &m) {
	cout << "Please enter the values of matrix";
	for(int i = 0; i < m.rows; i++) {
		for(int j = 0; j < m.cols; j++) {
			cout << "Please enter the values of elements" << i << ',' << j;
			input >> m.elements[i][j];
		}
	}
	return input;
}

int main(){
	return 0;
}
