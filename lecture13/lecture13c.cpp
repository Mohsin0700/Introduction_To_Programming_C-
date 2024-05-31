#include <iostream>
using namespace std;
void getInput(double sal[][2],int numEmps);
void calNetSal(double sal[][2], int numEmps);
void findUnluckies(double sal[][2], int numEmps, int lucky[]);
void markIfUnlucky(double sal[][2], int numEmps, int lucky[], int upperBound, int empNmbr);
void printUnluckies(int lucky[], int numEmps);

int main(){
	
	int numEmps;
	cout << "Please enter total number of employees" << endl;
	cin >> numEmps;
	double sal[numEmps][2];
	int lucky[] = {0};
	
	getInput(sal, numEmps);
	calNetSal(sal, numEmps);
	findUnluckies(sal, numEmps, lucky);
	printUnluckies(lucky, numEmps);
	
	return 0;
}

void getInput(double sal[][2],int numEmps){
	for(int i = 0; i < numEmps; i++) {
		cout << "Please enter the gross salary of employee no " << i << ":" << endl;
		cin >> sal[i][0];
	}
}

void calNetSal(double sal[][2], int numEmps){
	for(int i = 0; i < numEmps; i++) {
		if(sal[i][0] >= 0 && sal[i][0] <= 5000) {
			sal[i][1] = sal[i][0];
		} else if(sal[i][0] >= 5001 && sal[i][0] <= 10000) {
			sal[i][1] = sal[i][0] = (0.05 * sal[i][0]);
		} else if(sal[i][0] >= 10001 && sal[i][0] <= 20000) {
			sal[i][1] = sal[i][0] = (0.10 * sal[i][0]);
		}  else if(sal[i][0] >=20001) {
			sal[i][1] = sal[i][0] = (0.15 * sal[i][0]);
		} 
	}
}

void findUnluckies(double sal[][2], int numEmps, int lucky[]){
	for(int i = 0; i < numEmps; i++) {
		if(sal[i][0] >= 5001 && sal[i][0] <= 10000) {
			markIfUnlucky(sal, numEmps, lucky, 5001, i);
		} else if(sal[i][0] >= 10001 && sal[i][0] <= 20000) {
			markIfUnlucky(sal, numEmps, lucky, 10001, i);
		} else if(sal[i][0] >= 10001 && sal[i][0] <= 20000) {
			markIfUnlucky(sal, numEmps, lucky, 10001, i);
		}
	}
}


void markIfUnlucky(double sal[][2], int numEmps, int lucky[], int upperBound, int empNmbr){
	for(int i = 0; i < numEmps; i++) {
		if(sal[i][0] < upperBound && sal[i][1] >= sal[empNmbr][1]) {
			lucky[empNmbr] = 1;
		}
	}
}

void printUnluckies(int lucky, int numEmps){
	for(int i = 0; i < numEmps; i++) {
	if(lucky == 1) {
		cout <<"\n Employee No.: " << i;
	}
	}
}
