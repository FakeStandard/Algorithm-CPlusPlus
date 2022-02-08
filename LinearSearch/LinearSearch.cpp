
#include<iostream>
#include<iomanip>

using namespace std;

// prototype
int linearSearch(const int[], int, int);

void main() {
	const int size = 100; // size of array a
	int a[size]; // create array a
	int searchKey; // value to locate in array a

	for (int i = 0; i < size; i++)
		a[i] = 2 * i;

	for (int i = 0; i < size; i++)
		cout << a[i] << ",";

	cout << "Enter integer search key:";
	cin >> searchKey;

	// attempt to locate searchKey in array a
	int element = linearSearch(a, searchKey, size);

	// display result
	if (element != -1)
		cout << "Found value in element " << element << endl;
	else
		cout << "Value not found" << endl;
}

/// <summary>
/// compare key to every element of array until location is found
/// or until end of array is reached;
/// return subscript of element if key is found or -1 if key not found
/// </summary>
/// <param name="array"></param>
/// <param name="key"></param>
/// <param name="size"></param>
/// <returns></returns>
int linearSearch(const int array[], int key, int size) {
	for (int j = 0; j < size; j++)
		if (array[j] == key)
			return j;
	return -1;
}