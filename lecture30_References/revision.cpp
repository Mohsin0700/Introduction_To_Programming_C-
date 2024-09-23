#include <iostream>
using namespace std;

void changeName(int &j){
	j = 20;
	cout << "Function number: " << j << endl;
}

int main(){
//	int i;
//	int &j = i;
//	i = 102;
//	cout << i << endl;
//	cout << j << endl;
//	j++;
//	cout << i << endl;
//	cout << j << endl;
	int i = 10;
	int &j = i;
	changeName(j);	
	cout << "main number: " << i << endl;


	
	return 0;
}
