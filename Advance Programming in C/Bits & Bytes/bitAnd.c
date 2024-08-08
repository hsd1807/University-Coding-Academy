#include <stdio.h>

int bitAnd(int x, int y) {
	return ~(~x | ~y);
}

int main() {
	int x = 13
  	int y = 18;
	printf("%d", x & y);
	printf("\n%d", bitAnd(x, y));
	return 0;
}
