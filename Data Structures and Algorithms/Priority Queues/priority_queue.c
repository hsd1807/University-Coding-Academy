#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct {
	int *pq;
	int n;
	int capacity;
} PriorityQueue;

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void resize_array(PriorityQueue *pq, int new_capacity) {
	int *new_array = (int *) malloc(sizeof(int) * new_capacity);

	for (int i = 0; i < pq->n; i++) {
		new_array[i] = pq->pq[i];
	}

	free(pq->pq);
	pq->pq = new_array;
}

void swim(PriorityQueue *pq, int k) {
	while (k > 1 && pq->pq[k/2] < pq->pq[k]) {
		swap(&pq->pq[k], &pq->pq[k/2]);
		k = k/2;
	}
}

void sink(PriorityQueue *pq, int k) {
	while (2 * k <= pq->n) {
		int j = 2 * k;
		if (j < pq->n && pq->pq[j] < pq->pq[j+1]) j++;
		if (pq->pq[k] >= pq->pq[j]) break;
		swap(&pq->pq[k], &pq->pq[j]);
		k = j;
	}
}

PriorityQueue* createPriorityQueue(int capacity) {
	PriorityQueue* pq = (PriorityQueue*) malloc(sizeof(PriorityQueue));
	pq->pq = (int*) malloc((capacity + 1) * sizeof(int));
	pq->n = 0;
	pq->capacity = capacity;
	return pq;
}

void insert(PriorityQueue *pq, int x) {
	if (pq->n == pq->capacity) {
		pq->capacity = pq->n * 2;
		resize_array(pq, pq->capacity);
	}
	pq->pq[++pq->n] = x;
	swim(pq, pq->n);
}

int delMax(PriorityQueue *pq) {
	if (pq->n == 0) {
		return -1;
	}

	int maxElement = pq->pq[1];
	swap(&pq->pq[1], &pq->pq[pq->n--]);
	sink(pq, 1);
	pq->pq[pq->n+1] = NULL; // loitering
	
	if (pq->n <= pq->capacity) resize_array(pq, pq->n / 2);
	pq->capacity = pq->n / 2;
	return maxElement;
}

int isEmpty(PriorityQueue *pq) {
	return pq->n == 0;
}

int size(PriorityQueue *pq) {
	return pq->n;
}

void freePriorityQueue(PriorityQueue *pq) {
	free(pq->pq);
	free(pq);
}

int main() {
	PriorityQueue *pq = createPriorityQueue(10);
	insert(pq, 5);
	insert(pq, 11);
	insert(pq, 7);

	assert(delMax(pq) == 11);
	assert(size(pq) == 2);

	insert(pq, 15);
	insert(pq, 11);
	insert(pq, 19);
	
	assert(delMax(pq) == 19);

	freePriorityQueue(pq);
  
	return 0;
}
