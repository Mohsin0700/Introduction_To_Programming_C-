#include <iostream>
using namespace std;

//	Example Program #01 includes only a single class
//	Second example program will container another identical class

class myClass2;
class myClass {
	friend void increment(myClass*, int);
	
	private:
		int hiddenNumber;
		
	public:
		myClass(){
			hiddenNumber = 18;
		}
		void display(){
			cout << "Hidden number of class 1 is: " << hiddenNumber << endl;
		}
		friend void addBothClasses(myClass*, myClass2*);
};

void increment(myClass *a, int i) {
	a->hiddenNumber += i;
}

class myClass2 {
	friend void increment(myClass*, int);
	
	private:
		int hiddenNumber;
		
	public:
		myClass2(){
			hiddenNumber = 18;
		}
		void display(){
			cout << "Hidden number of class 2 is: " << hiddenNumber << endl;
		}
		friend void addBothClasses(myClass*, myClass2*);
};

//void increment(myClass *a, int i) {
//	a->hiddenNumber += i;
//}

void addBothClasses(myClass *class1, myClass2 *class2) {
	int result = class1->hiddenNumber + class2->hiddenNumber;
	cout << "Sum of the hidden number of two classes are: " << result << endl;
}

int main(){
//	Example 1 function calling
//	myClass obj;
//	obj.display();
//	increment(&obj, 5);
//	obj.display();

//	Functions calling for example 2
	myClass obj1;
	myClass2 obj2;
	obj1.display();
	obj2.display();
	addBothClasses(&obj1, &obj2);
	
	return 0;
}