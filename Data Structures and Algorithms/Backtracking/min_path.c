#include <stdio.h>

int min(int a, int b) {
	if (a < b) return a;
	return b;
}

int isValid (int i, int j, int m, int n) {
	// Exit Condition
	if (i < 0 || j < 0 || i > m || j > n) return 0;
	return 1;
}

int  ReachEnd(int matrix[3][4], int i, int j, int m, int n) {
	//Base Condition
	if (i == m && j == n) {
		return matrix[i][j];
	}
	
	int choice1Valid = isValid(i + 1, j, m, n);
	int choice2Valid = isValid(i, j + 1, m, n);

	// We can take both PATHS
	if (choice1Valid && choice2Valid) {
		int calChoice1 = ReachEnd(matrix, i + 1, j, m, n);
		int calChoice2 = ReachEnd(matrix, i, j + 1, m, n);
		return matrix[i][j] + min(calChoice1, calChoice2);
	}

	// We can only take Choice 1
	if (choice1Valid) {
		int calChoice1 = ReachEnd(matrix, i + 1, j, m, n);
		return matrix[i][j] + calChoice1;
	}

	// We can only take Choice 2
	int calChoice2 = ReachEnd(matrix, i, j + 1, m, n);
	return matrix[i][j] + calChoice2;
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
