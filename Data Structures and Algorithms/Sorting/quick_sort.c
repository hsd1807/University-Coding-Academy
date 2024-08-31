#include <stdio.h>

void swap(int arr[], int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int partition(int arr[], int left, int right) {
	int pivot = arr[right], index = left - 1;

	for (int i = left; i <= right; i++) {
		if (arr[i] <= pivot) swap(arr, ++index, i); 
	}
	
	return index;
}

void quick_sort(int arr[], int left, int right) {
 	if (left < right) {
		int pivot = partition(arr, left, right);
		quick_sort(arr, left, pivot - 1);
		quick_sort(arr, pivot + 1, right);
	}
}

int main() {
	int arr[] = {2, 3, 7, 1, 6, 4, 5};
	int size = 7;

	quick_sort(arr, 0, size - 1);

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
