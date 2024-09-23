#include <iostream>
using namespace std;
#define SQ(X) X*X
//#ifdef PI
//#define Mohsin 27
//#else
//#define Arbab 25
//#endif // End of conditional preprocessing
#undef Arbab

int main(){
//	#ifdef Mohsin
//        cout << Mohsin;
//    #else
//        cout << Arbab;
//    #endif
	cout << SQ(2);
	return 0;
}
