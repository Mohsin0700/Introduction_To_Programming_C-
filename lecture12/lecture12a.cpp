#include <iostream>
using namespace std;

main(){
//	To find lowest number in an array
	
//	float lowestNum, sum;
//	int allNums[] = {25, 26, 13, 7, 98, 78 , 5};
//	int length = sizeof(allNums) / sizeof(allNums[0]);
//	lowestNum = allNums[0];
//	for(int i = 0; i < length; i++) {
//		if(lowestNum >  allNums[i]) {
//			lowestNum = allNums[i];
//		}
//		cout << "Current loop number is: " << allNums[i] << endl;
//		cout << "lowest number is: " << lowestNum << endl;
//	} 

//	char myName[] = "Hafiz Mohsin";
//	cout << myName << endl;
//	int length = sizeof(myName) / sizeof(myName[0]);

//	Finding a character....

//	for(int i = 0; i< length; i++) {
//		if(myName[i] == 'f') {
//		cout << "The character 'f' is situated at " << i << " index of this array" << endl;
//		}
//	}


//	Array sorting using Nested Loop...
//	This tehcnique is called Brute-Force Technique...
	int allNums[] = {25, 26, 13, 7, 98, 78 , 5};
	int size = sizeof(allNums);
	int allNumsLength = sizeof(allNums) / sizeof(allNums[0]);
	cout << size << endl;
	
//	for(int i = 0; i < allNumsLength; i++) {	
//		cout << allNums[i] << endl;
//	}
//	
	int x;
	int lowestNum;
	lowestNum = allNums[0];
	
//	Nested Loop
	for(int i = 0; i < allNumsLength; i++) {
		for(int j = i+1; j < allNumsLength; j++) {
			if(allNums[i] > allNums[j]) {
//				swapping numbers...
				x = allNums[i];
				allNums[i] = allNums[j];
				allNums[j] = x;
			}
		}
	}
	
	cout << "after sorting" << endl;
	for(int i = 0; i < allNumsLength; i++) {	
		cout << allNums[i] << endl;
	}
	

}
