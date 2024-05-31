#include <iostream>
using namespace std;

main(){
//	cout << "Enter your grade"<< "\n";
//	char userGrad;
//	cin >> userGrad;
//	
//	switch(userGrad) {
//		case 'A':
//		case 'a':
//			cout << "Excellent" << "\n";
//			break;
//		
//		case 'B':
//		case 'b':
//			cout << "Very Good" << "\n";
//			break;
//			
//		case 'C':
//		case 'c':
//			cout << "Good" << "\n";
//			break;
//			
//		case 'D':
//		case 'd':
//			cout << "Poor" "\n";
//			break;
//			
//		case 'F':
//		case 'f':
//			cout << "Fail" << "\n";
//		
//		default:
//			cout << "Please enter grade from 'A' to 'D' or 'F'";
//	}

//for(int i = 0; i<= 10; i++) {
//	if(i == 5) {
//		continue;
//	}
//	if(i == 9) {
//		break;
//	}
//	cout << "Current Number is " << i << "\n";
//}

char userGrad;
cout << "Please enter your grade to know your status" << endl;
cin >> userGrad;

switch(userGrad){
	case 'A':
	case 'a':
		cout << "Excellent";
		break;
	case 'B':
	case 'b':
		cout << "Good";
		break;
	case 'C':
	case 'c': 
		cout << "Better";
		break;
	case 'D':
	case 'd':
		cout << "Poor";
		break;
}

}