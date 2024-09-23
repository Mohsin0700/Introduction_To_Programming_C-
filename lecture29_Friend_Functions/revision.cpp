#include <iostream>
using namespace std;

class Human {
	friend void personality(Human, char[]);
	private:
		int cnic = 42101;
		int age = 26;
	public:
		void laugh(){
			cout << "Human can laugh" << endl;
		}
		void weep(){
			cout << "Human can weep" << endl;
		}
};

void personality(Human, char name[]) {
	cout << "This human name is " << name << endl;
}
int main(){
	Human person;
	char name[] = "Hafiz Mohsin";
	personality(person,name);
	return 0;
}
