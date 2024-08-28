#include <stdio.h>

void ReachEnd(int i, int j, int m, int n) {
	//Exit Condition
	if (i > m || j > n) return;

	//Base Condition
	if (i == m && j == n) {
		printf("%d %d\n", m, n);
		return;
	}

	printf("%d %d-> ", i, j);
	
	//Choice 1
	ReachEnd(i + 1, j, m, n);
	
	//Choice 2
	ReachEnd(i, j + 1, m, n);
}

// Complexity = (choices) power (m * n)

int main() {
	int m = 2, n = 2;
	ReachEnd(0, 0, m, n);
	return 0;
}
