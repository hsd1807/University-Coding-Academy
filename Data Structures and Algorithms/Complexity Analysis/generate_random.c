#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate(int n, int lower_bound, int upper_bound) {
	for (int i = 0; i < n; i++) {
		printf("%d ", (rand() % (upper_bound - lower_bound + 1) + lower_bound));
	}
		printf("\n");
}

int main() {
	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		printf("%d ", rand());
	}

	printf("\n");

	generate(10, 20, 40);
	return 0;
}
