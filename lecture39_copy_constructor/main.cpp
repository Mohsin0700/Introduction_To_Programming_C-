#include <iostream>
using namespace std;

//class Matrix {
//	private:
//		int *m;
//		int row,col;
//	
//	public:
//		Matrix(int rows, int cols){
//			m = new int[rows * cols];
//		}
//};
//	Example #01

class String {
	char *c;
	public:
		void copy(const char *s);
		String(const char *data);
		void print();
};

int main(){
	
//	Matrix m1,m2;
//	m1 = m2;	//	wrong method
	String s1("Mohsin");
	String s2 = s1;
	s1.copy("Arbab");
	return 0;
}
