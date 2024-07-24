#include <stdio.h>

void swap(int arr[], int index1, int index2) {
	int temp = arr[index1];
	arr[index1] = arr[index2];
	arr[index2] = temp;
}

void selection_sort(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		int min = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[min] > arr[j]) min = j;
		}
		swap(arr, min, i);
	}
}

int main() {
	int arr[] = {3, 2, 5, 4, 7, 1, 6, 8};
	int n = 8;

	selection_sort(arr, n);

	for (int i = 0; i < n; i++) printf("%d\n", arr[i]);
	return 0;
}
