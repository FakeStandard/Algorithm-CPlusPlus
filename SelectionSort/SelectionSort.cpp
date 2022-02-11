

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

	int index, tmp;

	// scan number
	for (int i = 0; i < size; i++) {
		index = i;

		// search min number
		for (int j = i; j < size; j++) {
			if (data[j] < data[index]) {
				index = j;
			}
		}

		// swap
		tmp = data[i];
		data[i] = data[index];
		data[index] = tmp;
	}

	cout << endl << endl << "sorted array" << endl;
	for (int k = 0; k < size; k++)
		cout << data[k] << ",";
}