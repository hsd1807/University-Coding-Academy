#include <stdio.h>

void swap(int arr[], int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void bubble_sort(int arr[], int n) {
	int swapped, i, j;
	for (i = 0; i < n; i++) {
		swapped = 0;
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr, j, j + 1);
				swapped++;
			}
		}
		if (!swapped) break;
	}
}

int main() {
	int arr[] = {5, 1, 3, 7, 2, 4, 6};
	int size = 7;

	bubble_sort(arr, size);

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
