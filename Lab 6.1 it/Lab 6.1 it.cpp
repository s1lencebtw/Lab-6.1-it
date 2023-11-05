#include <iostream>
#include <cmath>
#include <random>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

void printArray(int* arr, int size);
void generateArray(int* arr, int size, int min, int max);
int countElements(int* arr, int size);
int sumElements(int* arr, int size);
void replaceElements(int* arr, int size);

int main() {
	const int arrSize = 25;
	int c[arrSize];

	generateArray(c, arrSize, 5, 90);

	cout << "Original array: ";
	printArray(c, arrSize);


	cout << "Number of elemnts: " << countElements(c, arrSize) << endl;

	cout << "Sum of elements: " << sumElements(c, arrSize) << endl;

	replaceElements(c, arrSize);

	cout << "Modified:       ";
	printArray(c, arrSize);

	return 0;
}

void generateArray(int* arr, int size, int min, int max) {
	srand(unsigned(time(NULL)));
	for (int i = 0; i < size; i++) {
		arr[i] = min + rand() % (max - min + 1);
	}
}
void printArray(int* array, int size) {
	for (int i = 0; i < size; i++) {
		cout << setw(4) << array[i] << " ";
	}
	cout << endl;
}

int sumElements(int* arr, int size) {

	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0 || (i % 8 != 0))
		{
			sum += arr[i];
		};
	}
	return sum;
}

int countElements(int* arr, int size) {
	int count = 0;
	for (int k = 0; k < size; k++) {
		if (arr[k] % 2 == 0 || (k % 8 != 0)) {
			count++;
		};
	}
	return count;
}

void replaceElements(int* arr, int size) {
	for (int j = 0; j < size; j++) {
		if (arr[j] % 2 == 0 || (j % 8 != 0)) {
			arr[j] = 0;
		}
	}
}