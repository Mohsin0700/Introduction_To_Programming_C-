#include <iostream>
using namespace std;

int main(){
	int *ptr;
//	ptr = (int*) calloc(10, sizeof(int));	// calloc function calloc(numbers of memory, memory size);
	ptr = (int*) malloc(10 * (sizeof(int))); 	//(total number of bytes);
	if(ptr != NULL) {
		cout << "Memory has been allocated";
	} else {
		cout << "Memory not available";
	}
	
	ptr = (int*) realloc(ptr, 10 * (sizeof(int))); // memory can be increased as per need
	free(ptr);	// realeases the memory allocated from above
	return 0;
}
