#include <stdio.h>

int main() {
	int a = 1, b = 1, c, sum = 0, n;
	scanf("%d", &n);

	while (a + b <= n) {
		c = a + b;
		if (!(c & 1)) {
			sum += c;
		}
		a = b;
		b = c;
	}

	printf("%d\n", sum);

	return 0;
}
