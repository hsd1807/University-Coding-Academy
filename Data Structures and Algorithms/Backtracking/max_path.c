#include <stdio.h>

int max(int a, int b) {
	if (a > b) return a;
	return b;
}

int  ReachEnd(int matrix[3][4], int i, int j, int m, int n) {
	//Exit Condition
	if (i > m || j > n) return 0;

	//Base Condition
	if (i == m && j == n) {
		return matrix[i][j];
	}
	
	int value = matrix[i][j], choice1, choice2;
	
	//Choice 1
	choice1 = ReachEnd(matrix, i + 1, j, m, n);
	//Choice 2
	choice2 = ReachEnd(matrix, i, j + 1, m, n);

	return value + max(choice1, choice2);
}

// Complexity = (choices) power (m * n)

int main() {
	int m = 2, n = 3;
	int matrix[3][4] = { 
		{1, 1, 1, 1}, 
		{1, 1, 1, 1}, 
		{0, 0, 0, 0}
	};
	printf("%d\n", ReachEnd(matrix, 0, 0, m, n));
	return 0;
}
