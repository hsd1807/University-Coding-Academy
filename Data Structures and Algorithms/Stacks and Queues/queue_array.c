#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <assert.h>
#include "queue.h"

#define INITIAL_CAPACITY 1

int* array;
int front = 0;
int rear = 0;
int N = 0;
int max_size = INITIAL_CAPACITY;

bool isEmpty() {
	return N == 0;
}

int size() {
	return N;
}

void resize_array(int new_capacity) {
	int *new_array = (int *) malloc(sizeof(int) * new_capacity);

	for (int i = 0; i < N; i++) {
		new_array[i] = array[(front + i) % max_size];
	}
	free(array);
	array = new_array;
	front = 0;
	rear = N;
	max_size = new_capacity;
}

void push(int item) {
	if (N == max_size) {
		resize_array(2 * max_size);
	}

	array[rear] = item;
	rear = (rear + 1) % max_size;
	N++;
}

int pop() {
	if (isEmpty()) return INT_MIN;

	int item = array[front];
	front = (front + 1) % max_size;
	N--;

	if (N > 0 && N <= max_size / 4) {
		resize_array(max_size / 2);
	}
	return item;
}

void testQueue() {
	push(3);
	push(5);
	push(7);

	assert(size() == 3);
	assert(isEmpty() == false);

	assert(pop() == 3);
	assert(size() == 2);
	assert(isEmpty() == false);

	assert(pop() == 5);
	assert(size() == 1);
	assert(isEmpty() == false);

	assert(pop() == 7);
	assert(size() == 0);
	assert(isEmpty() == true);
}

int main() {
	array = (int *) malloc(sizeof(int) * INITIAL_CAPACITY);
	
	testQueue();
	
	free(array);
	return 0;
}

