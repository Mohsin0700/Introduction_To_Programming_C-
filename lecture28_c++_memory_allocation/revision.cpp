#include <iostream>
using namespace std;

class Student {
	private:
		int cnic = 12345;
		int id = 786;
	public:
		void laugh(){
			cout << "Student can laugh" << endl;
		}
		
		Student(){
			laugh();
		}
};

int main(){
//	int *iPtr;
//	iPtr = new int;
//	delete iPtr;
	
//	to create space for 10 integers
//	iPtr = new int[10];
//	As c returns null if memory is not availbe, c++ returns 0

	Student *s1;
	s1 = new Student;	//single object
//	s1.laugh(); // wrong method when using pointer to an object
	s1->laugh(); // correct one
//	s1 = new Student[10];	// array of objects
//	delete[] s1 while deleteing a pointer to an array
	return 0;
}
                      