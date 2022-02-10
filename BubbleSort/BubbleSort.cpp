
#include <iostream>
#include <iomanip>

using namespace std;

void main() {
	// size of array a.
	const int size = 10;
	int data[size] = { 34, 56, 4, 10, 77, 51, 93, 30, 5, 52 };

	cout << "unsorted array." << endl;
	for (int k = 0; k < size; k++)
		cout << data[k] << ",";

	int i, j, tmp;

	// number of comparisons
	for (i = size - 1; i > 0; i--) {
		// 
		for (j = 0; j < i; j++) {

			if (data[j] > data[j + 1]) {
				// swap
				tmp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = tmp;
			}
		}
	}

	cout << endl << endl << "sorted array" << endl;
	for (int k = 0; k < size; k++)
		cout << data[k] << ",";
}