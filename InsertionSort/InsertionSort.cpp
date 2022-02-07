
#include <iostream>
#include <iomanip>

using namespace std;

void main() {

	// size of array a.
	const int size = 10;
	int data[size] = { 34, 56, 4, 10, 77, 51, 93, 30, 5, 52 };

	// temporary variable to hold element to insert.
	int insert;

	// output original array.
	cout << "Unsorted array" << endl;

	for (int i = 0; i < size; i++)
		cout << setw(4) << data[i];

	// insertion sort
	// 
	// loop over the elements of the array.
	for (int next = 1; next < size; next++) {

		// store the value in the current element.
		insert = data[next];

		// initialize location to place element.
		int moveItem = next;

		// search for the location in which to put the current element.
		while ((moveItem > 0) && (data[moveItem - 1] > insert)) {
			data[moveItem] = data[moveItem - 1];
			moveItem--;
		}

		// place inserted element into the array.
		data[moveItem] = insert;
	}

	cout << endl << "Sorted array" << endl;
	for (int i = 0; i < size; i++)
		cout << setw(4) << data[i];

	// variable change
	//int data[size] = { 34, 56, 4, 10, 77, 51, 93, 30, 5, 52 };

	//int i; // 掃描次數
	//int j; // 定位比較元素
	//int tmp; // 暫存資料

	//for (i = 1; i < size; i++) {
	//	tmp = data[i];
	//	j = i;

	//	while ((j > 0) && (data[j - 1] > tmp)) {
	//		data[j] = data[j - 1];
	//		j--;
	//	}

	//	data[j] = tmp;
	//}

	//cout << endl << "Sorted array" << endl;
	//for (int i = 0; i < size; i++)
	//	cout << setw(4) << data[i];
}