#include <iostream>
using namespace std;

main(){
//	cout << "Hello World This is my 4th lecture of Introduction to Programming";
//	int age1, age2, age3, age4, age5, age6, age7, age8, age9, age10;
//	int totalAge;
//	double averageAge;
//	cout << "Inter age of Student 1";
//	cin >> age1;
//	cout << "Inter age of Student 2";
//	cin >> age2;
//	cout << "Inter age of Student 3";
//	cin >> age3;
//	cout << "Inter age of Student 4";
//	cin >> age4;
//	cout << "Inter age of Student 5";
//	cin >> age5;
//	cout << "Inter age of Student 6";
//	cin >> age6;
//	cout << "Inter age of Student 7";
//	cin >> age7;
//	cout << "Inter age of Student 8";
//	cin >> age8;
//	cout << "Inter age of Student 9";
//	cin >> age9;
//	cout << "Inter age of Student 10";
//	cin >> age10;
//	
//	totalAge = age1 + age2 + age3 + age4 + age5 + age6 + age7 + age8 + age9 + age10;
//	averageAge = totalAge / 9;
//	
//	cout << "Average age is: " << averageAge;

//cout << "Inter four digit number";
//int number;
//cin >> number;



//int firstNum = number % 10;
//
//int remainingThreeNums = number / 10;
//
//int secondNum = remainingThreeNums % 10;
//
//int remainingTwoNums = remainingThreeNums / 10;
//
//int thirdNum = remainingTwoNums % 10;
//
//int lastNum = remainingTwoNums / 10;
//
//cout << "Here is all four numbers seperated with comas" << "\n" << firstNum << "," <<"\n" <<  secondNum << "," <<"\n" <<  thirdNum << "," <<"\n" <<  lastNum;

// In this practice I created an array of size 10 and placed 10 different student ages using for loop and get sum of all ages to show their average age....
//int allAges[10];
//int arrSize = 10;
//int total = 0;
//int avg;
//
//for(int i = 0; i < arrSize; i++) {
//	cout << "Enter number " << i+1 << endl;
//	cin >> allAges[i];
//	total += allAges[i];
//}
//avg = total / arrSize;
//cout << "Total of all ages are " << total << endl;
//cout << "Average of student age is " << avg << endl;

// This program is created to take an input(integers/numbers) from a user and show them seprately...

int userInput;
int arr[4];
int currentNum;
int remainingNums;

cout << "Please enter a four digit positive numbers" << endl;
cin >> userInput;
remainingNums = userInput;

for(int i = 0; i < 4; i ++) {
	currentNum = remainingNums % 10;
	cout << "current num is: " << currentNum << endl;
	arr[i] = currentNum;
	cout << "remaining number before divison: " << remainingNums << endl;
	remainingNums = remainingNums / 10;
	cout << "remaining number after divison: " << remainingNums << endl;
}

cout << "User input is " << endl;
// To print given number is proper direction we will run a reverse loop...
for(int i = 3; i >=0; i--) {
	cout << arr[i] << ',' << endl;
}






}