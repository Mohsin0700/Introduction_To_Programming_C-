#include <iostream>
using namespace std;

int main(){
//	As we use objects in javaScript and Maps in dart
//	Similarly we use Structures in C++
//	Structures are declared by Struct keyword
//	cout << (*sPtr).name << endl; || Jugarr
//	It can also be used as a new type to create more instance from it

//	Simple structure
//	struct Address {
//			char streetAdress[100];
//			char city[30];
//			char country[30];	
//	};
	
//	struct Student {
//		char name[20];
//		double gpa;
//		Address address;
//	};
	
	
	
//	Array of students
//	Student allStudents[100];

//	Pointer to students
//	Student *sPtr;

//	declaration of variable of new type defined by us
//	Student stdnt1, stdnt2;
//	we can't add them, we can assigne theme to each other because both are of identical types...
//	stdnt1 = stdnt2;
	
	
	
//	Example-01
	
//	struct Card {
//		char *suit;
//		char *value;
//	};
	
//	Example-02
	
//	struct Student {
//		char *name;
//		char *course;
//		int age;
//		int joinYear;
//	};
//	
//	Student s1 {"Mohsin", "Introduction to Programming", 27, 2024};
//	
//	cout << "Stored values are:" << endl;
//	cout << s1.name << ", " << s1.course << ", " << s1.age << ", " << s1.joinYear << endl;
//	
//	s1.name = "Hafiz Mohsin";
//	s1.course = "Software Engineering";
//	s1.age = 27;
//	s1.joinYear = 2021;
//	
//	cout << "altered values are:" << endl;
//	cout << s1.name << ", " << s1.course << ", " << s1.age << ", " << s1.joinYear << endl;
	
	
//	Passing structures to the function
//	By default structures are passed by value, to pass it by reference we use pointers like we used before
//	Pointers to structures...
//	Student *sPtr, s2;
//	s2 = s1;
//	sPtr = &s2;
//	cout << sPtr -> name << endl; // proper
//	sPtr -> name = "Muhammad Arbab";
//	cout << sPtr -> name << endl;

//	Example-03 Complex example
	struct Student {
		char firstName[30];
		char lastName[30];
		char course[20];
		char rollNo[10];
		int age;
		float gpa;
	};
	
	Student allStudents[2];
	
	for(int i = 0; i < 2; i++) {
		cout << "Please enter first name of student" << i+1 << endl;
		cin >> allStudents[i].firstName;
		cout << "Please enter last name" << endl;
		cin >> allStudents[i].lastName;
		cout << "Please enter course" << endl;
		cin >> allStudents[i].course;
		cout << "Please enter roll number" << endl;
		cin >> allStudents[i].rollNo;
		cout << "Please enter gpa" << endl;
		cin >> allStudents[i].gpa;
	}
	
	for(int i = 0; i < 2; i++) {
		cout << "Student Name is: " << allStudents[i].firstName << " " << allStudents[i].lastName << endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
//	Always return 0 means code ran successfully...
	
	return 0;
}
