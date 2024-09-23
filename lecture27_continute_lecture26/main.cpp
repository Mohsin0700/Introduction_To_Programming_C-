#include <iostream>
#include <cstdlib>
using namespace std;

class Date {
	private:
		int day, month, year;
	public:
		void display();
		void setDay(int d);
		void setMonth(int m);
		void setYear(int y);
		int getDay();
		int getMonth();
		int getYear();
		
		Date();
		Date(int, int);
		Date(int, int, int);
		~Date();
		
};

Date::Date(){
	cout << "Default constructor with no-parameter has been run" << endl;
	day = 1;
	month = 1;
	year = 1990;
	cout << "Current date is: " << day << "/" << month << "/" << year << endl;
}

Date::Date(int d, int m){
	cout << "Constructor with two parameter ran successfully" << endl;
	day = d;
	month = m;
	year = 1990;
	cout << "Now the date is: " << day << "/" << month << "/" << year << endl;
}

Date::Date(int d, int m, int y) {
	cout << "Constructor with three arguments has been run" << endl;
	day = d;
	month = m;
	year = y;
	cout << "Finally date after last constructor is: " << day << "/" << month << "/" << year << endl;
}

void Date::display(){
	cout << "Display function has been run and the date is: " << getDay() << "/" << getMonth() << "/" << getYear() << endl;
}

void Date::setDay(int d) {
	cout << "Set date fanction has been run and the date is shown with a new day" << endl;
	cout << "Date with new day is: " << day << "/" << month << "/" << year << endl;
}

void Date::setMonth(int m) {
	cout << "Set month function ran, month has been changed" << endl;
	cout << "The date after new month is: " << day << "/" << month << "/" << year << endl;
	month = m;
}


void Date::setYear(int y) {
	cout << "Set year function ran, year has been changed" << endl;
	cout << "The date after new year is: " << day << "/" << month << "/" << year << endl;
	year = y;
}


int Date::getDay(){
	return day;
}

int Date::getMonth(){
	return month;
}

int Date::getYear(){
	return year;
}

Date::~Date(){
	cout << "The object has been destroyed" << endl;
}

int main(){
	Date date1, date2(2,2), date3(30, 7, 1997);
	date1.display();
	date2.display();
	date3.display();
	return 0;
}