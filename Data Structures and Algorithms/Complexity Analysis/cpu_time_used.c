#include <stdio.h>
#include <time.h>

int main() {
	clock_t start_time, end_time;
	double cpu_time_used;

	start_time = clock();

	int sum = 0;
	for (int i = 1; i <= 100000; i++) {
		sum += i;
	}

	end_time = clock();

	cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

	printf("Sum = %d\n", sum);
	printf("CPU Time Used: %f seconds\n", cpu_time_used);
	return 0;
}
