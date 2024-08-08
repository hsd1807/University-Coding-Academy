#include <stdio.h>

int bitAnd(int x, int y) {
	return ~(~x | ~y);
}

int main() {
	int x = 13
  	int y = 18;
	printf("%d\n", x & y);
	printf("%d\n", bitAnd(x, y));
	return 0;
}
