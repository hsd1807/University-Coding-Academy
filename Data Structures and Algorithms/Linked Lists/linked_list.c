#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include "linked_list.h"

struct Node {
	int item;
	struct Node *next;
};

struct Node* head = NULL;
int N = 0;

bool isEmpty() {
	return head == NULL;
}

int size() {
	return N;
}

void insert(int item) {
	struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
	newNode->item = item;
	newNode->next = NULL;

	if (head == NULL) {
		head = newNode;
	}
	else {
		struct Node *temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
	}
	N++;
}

int delete(int item) {
	if (head == NULL) return INT_MIN;

	struct Node *temp = head;
	struct Node *prev = NULL;

	if (temp != NULL && temp->item == item) {
		head = temp->next;
		free(temp);
		N--;
		return item;
	}

	while (temp != NULL && temp->item != item) {
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL) return INT_MIN;

	prev->next = temp->next;
	free(temp);
	N--;

	return item;
}

void testLinkedList() {
	insert(3);
	insert(5);
	insert(7);

	assert(size() == 3);
	assert(isEmpty() == false);

	assert(delete(7) == 7);
	assert(size() == 2);
	assert(isEmpty() == false);

	assert(delete(5) == 5);
	assert(size() == 1);
	assert(isEmpty() == false);

	assert(delete(3) == 3);
	assert(size() == 0);
	assert(isEmpty() == true);
}

int main() {
	testLinkedList();
	return 0;
}
