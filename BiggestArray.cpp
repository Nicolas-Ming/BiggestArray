#include <iostream>

using namespace std;

int main()
{
	const int arrSize = 8;
	
	int bigArr[arrSize] = {1,2,3,4,500,6,7,8};
	
	int largest = bigArr[0];
	for (int i = 1; i < arrSize; i++) {
		if (bigArr[i] > largest) {
			largest = bigArr[i];
		}
	}
	cout << "The largest number in the size 8 array is: " << largest;
}
