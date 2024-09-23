#include <iostream>
using namespace std;

// Forward declaration of MyClassTwo to be used in MyClassOne
class MyClassTwo;

class MyClassOne {
    private:
        int secretNum;

    public:
        MyClassOne() {
            secretNum = 100;
        }

        void display() {
            cout << "MyClassOne secretNum: " << secretNum << endl;
        }

        // Friend function declaration
        friend int addBoth(MyClassOne, MyClassTwo);
};

class MyClassTwo {
    private:
        int secretNum;

    public:
        MyClassTwo() {
            secretNum = 200;
        }

        void display() {
            cout << "MyClassTwo secretNum: " << secretNum << endl;
        }

        // Friend function declaration
        friend int addBoth(MyClassOne, MyClassTwo);
};

// Friend function definition
int addBoth(MyClassOne objOne, MyClassTwo objTwo) {
    return objOne.secretNum + objTwo.secretNum;
}

int main() {
    MyClassOne objOne;
    MyClassTwo objTwo;
    
    objOne.display();
    objTwo.display();

    cout << "Sum of secret numbers: " << addBoth(objOne, objTwo) << endl;

    return 0;
}
