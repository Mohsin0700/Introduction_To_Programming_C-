#include <iostream>
using namespace std;

int main(){
//	to create a structure we use struct keyword followed by the name which we want to use for our structur and starts with a captial letter
//	struct Student {
//		char name[20];
//		char address[100];
//		double cgpa;
//	};
//	Student s1, s2, s3;
//	This is how we create a new data-type and created three instances/objects of this data-type
//	struct Address {
//		char street[20];
//		char city[20];
//		char country[10];
//	};
//
//	struct Student {
//		char name[20];
//		Address add;
//		double cgpa;
//	};
	
	
//	Example# 01
//	struct Card {
//		char *suit;
//		char *value;
//	};
//	
//	Example# 02

//	struct Student {
//		char name[20];
//		char *fatherName;
//		char course[20];
//		int age;
//		int joiningYear;
//	};
//	Student s1 = {
//		"Mohsin",
//		"Ameer",
//		"Flutter",
//		26,
//		2024
//	};
	
	
//	s1.name = "Bilal Rehman";	wrong we can't reassign string directly, instead we could use
//	strcpy(s1.name, "Bilal Rehman ");
//	s1.age = 20;	Correct we can reassign an integer but not string
//	s1.fatherName = "Ameer Hussain";	// Correct we can reassign string pointer
//	cout << s1.name << s1.course << endl;
//	cout << "My father name is " << s1.fatherName << endl;
//	cout << s1.age << endl;
	
	
//	Note
//	By default structures are passed in functions by value, if we want to pass it by reference then we must use pointer and address of the structure...
//	Student *sPtr, s2;
//	sPtr = &s1;
//	cout << "Structure member printed using pointer notation " << sPtr->name << endl;
	return 0;
}
