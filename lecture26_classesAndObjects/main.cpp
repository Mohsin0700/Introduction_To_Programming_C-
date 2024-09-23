#include <iostream>
#include <cstdlib>
using namespace std;

//class Date {
//	public:
//		void display();
//		void setDay(int d);
//		void setMonth(int m);
//		void setYear(int y);
//	
//	private:
//		int day, month, year;
//		
//};
//
//void Date::display() {
//	
//	cout  << day << "/"<< month  << "/" << year;
//}
//
//void Date::setDay(int d) {
//	day = d;
//}
//
//void Date::setMonth(int m) {
//	month = m;
//}
//
//void Date::setYear(int y) {
//	year = y;
//}
//
//int main(){
//	Date date1, date2;
//	date1.setDay(30);
//	date1.setMonth(07);
//	date1.setYear(1997);
//	
//	date1.display();
//	return 0;
//}


//	Sample Program 2
//class Date {
//	public:
//		Date(int,int,int);
//		void display();
//		
//	private:
//		int date, month, year;
//};
//
//Date::Date(int d, int m, int y){
//	date = d;
//	month = m;
//	year = y;
//}
//
//void Date::display(){
//
//	cout << "Date of birth is " << date << "/" << month << "/" << year << endl;
//}
//
//int main(){
//	Date myDate(30, 07, 1997);
//	myDate.display();
//	return 0;
//}

//************************************
//				Example#3
//************************************

class Date {
	public:
		void display();
		void setDay(int d);
		void setMonth(int m);
		void seyYear(int y);
		int getDay();
		int getMonth();
		int getYear();
		
		Date(int,int,int);
		
	private:
		int day, month, year;
};

Date::Date(int d,int m,int y){
	day = d;
	month = m;
	year = y;
}

void Date::display(){
	cout << "The date is " << day << "/" << month << "/" << year;
}

//getters || we have seen setters above...
int Date::getDay(){
	return day;
}

int Date::getMonth(){
	return month;
}

int Date::getYear(){
	return year;
}

int main(){
	Date myDate(30, 07, 1997);
	myDate.display();
	int d = myDate.getDay();
	cout << endl << d << endl;
}