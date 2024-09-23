#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // Open the file in read and write mode, create if it doesn't exist
//    fstream myFile("sample1.txt", ios::in | ios::out | ios::app);

    // Check if file opened successfully
//    if (!myFile) {
//        cout << "File could not be opened or created." << endl;
//        return 1;
//    }

//    long readPos = myFile.tellg();
//    long writePos = myFile.tellp();
//    
//    cout << readPos << endl;
//    cout << writePos << endl;
//    
//    myFile.seekg(10, ios::beg);
//    myFile.seekp(10, ios::end);
//    
//	readPos = myFile.tellg();
//    writePos = myFile.tellp();
//    
//	
//    cout << readPos << endl;
//    cout << writePos << endl;
//    
//    myFile.seekg(5, ios::cur);
//    readPos = myFile.tellg();
//	
//	myFile.close(); // Close the file

//	fstream myFile("sample1.txt", ios::in, ios::out);
//	ifstream myFile("sample1.txt");
//	char str[10000];
//	myFile.read(str,1000);
//	cout << str << endl;
	
	ofstream myFile("sample1.txt", ios::app);
	myFile << "I am adding this new text into my file";
    myFile.close();
    
    
    return 0;
}
