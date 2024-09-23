#include <iostream>
using namespace std;
//	Example #01
class MyDate {
	private:
		int day, month, year;
	public:
		MyDate(){
			cout << "Parameterless constructor called" << endl;
			day = month = year = 0;
		}
		
		MyDate(int day, int month, int year) {
			cout << "Constructor with 3 parameter is called" << endl;
			this->day = day;
			this->month = month;
			this->year = year;
		}
		~MyDate(){
			cout << "Destructor of MyDate is class is called" << endl;
//			delete dPtr; 
		}
		
//		setters
		void setDay(int day) {
			this->day = day;
		}
		
		void setMonth(int month) {
			this->month = month;
		}
		
		void setYear(int year) {
			this->year;
		}
//		getters
		int getDay(){
			return this->day;
		}
		
		int getMonth(){
			return this->month;
		}
		
		int getYear(){
			return this->year;
		}
		
		void setDate(int day, int month, int year) {
			this->day = day;
			this->month = month;
			this->year = year;
		}
};

int main(){
//	declared a pointer to an integer.
//	int *iPtr;
//	initialized pointer with appropriate data type and storage without complex calculation like malloc and calloc
//	iPtr = new int;
//	Freed up storage held by iPtr
//	delete iPtr;


//	For array
//	int *iPtr;													
//	iPtr = new int[10];

//	Simply as we created a class named Date in last lecture, we can also create it's pointer like
//	Date *myDate;
//	myDate = new Date;

//	Example #01
	MyDate *dPtr;
	dPtr = new MyDate[10];
	delete []dPtr;
	return 0;
}
