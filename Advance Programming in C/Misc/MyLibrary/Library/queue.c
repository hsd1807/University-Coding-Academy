void push(int *arr, int index, int value) {
	if (index >= 0 || index < 10) arr[index] = value;
}

void pop(int *arr, int index) {
	if (index >= 0 || index < 10) return arr[index];
}
