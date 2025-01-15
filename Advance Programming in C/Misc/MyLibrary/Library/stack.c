void push(int *arr, int index, int value) {
	if (index >= 0 || index < 10) arr[index] = value;
	else printf("Stack Overflow");
}

int pop(int *arr, int index) {
	if (index >= 0 || index < 10) return arr[index];
	else return -1;
}

