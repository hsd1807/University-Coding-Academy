#include <stdio.h>

void swap(int arr[], int index1, int index2) {
	int temp = arr[index1];
	arr[index1] = arr[index2];
	arr[index2] = temp;
}

void sort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i; j < n - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr, j, j + 1);
			}
		}
	}
}

int binarySearch(int arr[], int n, int x) {
	int start = 0, end = n - 1;

	while (start <= end) {
		int mid = start + (end - start) / 2;

		if (arr[mid] == x) {
			return 1;
		}
		else if (arr[mid] < x) {
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}
	return 0;
}

int main() {
	int arr[] = {2, 8, 19, 1, 3, 18, 13, 1, 11, 121};
	int n = 10;

	sort(arr, 10);

	int found = binarySearch(arr, 10, 118);
	
	if (found) {
		printf("Found");
	}
	else {
		printf("Not Found");
	}
	printf("\n");

	return 0;
}
