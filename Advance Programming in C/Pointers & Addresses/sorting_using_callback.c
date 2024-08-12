/*
Problem: Implement a Sorting Function with Callback

Create a sorting program that can sort an array of integers using different comparison strategies defined by function pointers. You should:

    Define comparison functions for ascending and descending order.
    Implement a sorting function that takes an array, its size, and a function pointer to the comparison function.
    The sorting function should use the comparison function to sort the array.

Example Functions:

void sort(int arr[], int size, int (*compare)(int, int));
int compareAsc(int a, int b);
int compareDesc(int a, int b);
void printArray(int arr[], int size);
*/

#include <stdio.h>

void swap(int arr[], int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void sort(int arr[], int size, int (*compare)(int, int)) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (compare(arr[j], arr[j + 1])) {
				swap(arr, j, j + 1);
		 	}
		}
	}
}

int compareAsc(int a, int b) {
	return a > b;
}

int compareDesc(int a, int b) {
	return a < b;
}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int arr[] = {13, 1, 2, 18, 25, 16, 7};
	int size = 7;

	sort(arr, size, compareAsc);
	printArray(arr, size);

	sort(arr, size, compareDesc);
	printArray(arr, size);	
}
