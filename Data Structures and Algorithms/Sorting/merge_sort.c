#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void merge(int arr[], int start, int mid, int end, int aux[]) {
	int index = start, index1 = start, index2 = mid + 1;
	while (index1 <= mid && index2 <= end) {
		if (arr[index1] <= arr[index2]) {
			aux[index++] = arr[index1++];
		}
		else {
			aux[index++] = arr[index2++];
		}
	}
	while (index1 <= mid) aux[index++] = arr[index1++];
	while (index2 <= end) aux[index++] = arr[index2++];
	
	for (int i = start; i <= end; i++) {
		arr[i] = aux[i];
	}	
}

void merge_sort(int arr[], int start, int end, int aux[]) {
	if (start < end) {
		int mid = (start + end) / 2;
		merge_sort(arr, start, mid, aux);
		merge_sort(arr, mid + 1, end, aux);
		merge(arr, start, mid, end, aux);
	}
}

int main() {
	int arr[] = {6, 5, 1, 7, 2, 4, 3};
	int size = 7;
	
	int *aux = (int *) malloc(size * sizeof(int));

	merge_sort(arr, 0, size - 1, aux);

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
