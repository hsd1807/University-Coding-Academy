#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include "queue.h"

struct Node {
	int item;
	struct Node* next;
};

struct Node *front = NULL;
struct Node *rear = NULL;
int N = 0;

bool isEmpty() {
	return front == NULL;
}

int size() {
	return N;
}

void push(int item) {
	struct Node *oldRear = rear;
	rear = (struct Node *) malloc(sizeof(struct Node));
	rear->item = item;
	rear->next = NULL;

	if (isEmpty()) {
		front = rear;
	}
	else {
		oldRear->next = rear;
	}
	N++;
}

int pop() {
	if (isEmpty()) return INT_MIN;

	struct Node* temp = front;
	int item = front->item;
	front = front->next;
	if (front == NULL) {
		rear = NULL;
	}
	N--;

	free(temp);

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
	testQueue();
	
	return 0;
}
