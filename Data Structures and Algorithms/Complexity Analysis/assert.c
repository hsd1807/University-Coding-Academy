#include <stdio.h>
#include <assert.h>

void add_one(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		 arr[i]++;
	}
}

void test_simple_input() {
	int arr[] = {0, 2, 4, 6, 8};
	int expected_output[] = {1, 3, 5, 7, 9};
	
	add_one(arr, 5);

	for (int i = 0; i < 5; i++) {
		assert(arr[i] == expected_output[i]);
	}
}

int main() {
	test_simple_input();
	return 0;
}
