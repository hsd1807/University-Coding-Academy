#include <stdio.h>

void swap(int arr[], int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void selection_sort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int min = i;
	 	for (int j = i + 1; j < n; j++) {
	 		if (arr[j] < arr[min]) {
				min = j;
			}
	 	}	
	 	swap(arr, i, min);
	}
}

int main() {
	int arr[] = {7, 5, 2, 1, 3, 4, 6};
	int size = 7;

	selection_sort(arr, size);

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
