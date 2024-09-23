#include <iostream>
#include <cstdlib>
using namespace std;


class Complex {
	private:
		double real;
		double imag;
	
	public:
	Complex(){
		cout << "Default Constructor called" << endl;
	}
	
	Complex(double r, double i) {
		cout << "Parameterized constructor called" << endl;
		real = r;
		imag = i;
	}
	
	void setReal(double r){
		real = r;
	}
	
	void setImag(double i) {
		imag = i;
	}
	
	double getReal(){
		return real;
	}
	
	double getImag(){
		return imag;
	}
	
	void display(){
		cout << "\n\n Displaying parts of complex number ...";
		cout << "\n Real Part : " << real << endl ;
		cout << " Imaginary Part : " << imag << endl ;
	}
	
	/* Declaration (prototype) of overloaded sum operator */
	
	Complex operator + (Complex &c2);
};

Complex Complex::operator +(Complex &c1) {
	cout << "Plus operator is called" << endl;
	Complex temp;
	temp.real = c1.real;
	temp.imag = c1.imag;
	return temp;
}

int main(){
	Complex c1(1,2);
	Complex c2(2,3);
	Complex result;
	result = c1 + c2;
	result.display();
	return 0;
}