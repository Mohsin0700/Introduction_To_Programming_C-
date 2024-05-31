#include <iostream>
using namespace std;


// using chat gpt...
//int binarySearch(int arr[], int low, int high, int target) {
//   while (low <= high) {
//       int mid = low + (high - low) / 2;
//       cout << "current mid point is: " << mid << endl;
//       if (arr[mid] == target) {
//           return mid;
//       } else if (arr[mid] < target) {
//            low = mid + 1;
//        } else {
//            high = mid - 1;
//        }
//    }
//    return -1; // Agar element nahi mila
// }


// Own coding 
int binarySearch(int arr[], int low, int high, int target){
	while(low <= high) {
		int mid = low + (high - low) / 2;
		
		if(arr[mid] == target) {
			return mid;
		} else if(arr[mid] < target) {
			low = mid + 1;
		} else if(arr[mid] > target) {
			high = mid - 1;
		}
	} 	
	return -1;
}
 
 int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    int target = 18;
    int low = 0;
    int high = arrLength - 1;
    int result = binarySearch(arr, low, high, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}
