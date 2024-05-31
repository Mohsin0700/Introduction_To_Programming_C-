#include <iostream>
using namespace std;

main(){
//	cout << "Program is running";
//	int mohsinAge, arbabAge;
	
//	int mohsinHeight = 5;
//	int arbabHeight = 6;
	
//	cout << "Enter Mohsin's age";
//	cin >> mohsinAge;
	
//	cout << "Enter Arbab's age";
//	cin >> arbabAge;
	
//	if(mohsinAge > arbabAge) {
//		cout << "Mohsin is elder and Arbab is younger";
//	} else {
//		cout << "Arbab is elder and Mohsin is younger";
//	}

//	if(mohsinAge > 18 && mohsinHeight >= 5) {
//		cout << "Mohsin is eligible to join force";
//	}
//	else if(mohsinAge > 18 || mohsinHeight >= 5) {
//		cout << "Mohsin can join cricket team";
//	} else {
//		cout << "Mohsin is not eligible for anything";
//	}

	int actualBillAmount, with10PercentDiscount, with50PercentDiscount;
	cout << "Enter bill amount";
	cin >> actualBillAmount;
	
	
	if(actualBillAmount > 5000) {
		with50PercentDiscount = actualBillAmount * 0.5;
		cout << "Your bill is" << "\n" << with50PercentDiscount;
	} else {
		with10PercentDiscount = actualBillAmount * 0.9;
		cout << "Your bill is" << "\n" << with10PercentDiscount;
	}
	
}