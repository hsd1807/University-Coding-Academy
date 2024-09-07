#include <stdio.h>

int main() {
	char *str = "HELLO WORLD!";
	//str[0] = 'E';  SEGMENTATION FAULT

	char str1[] = "HELLO WORLD!";
	str1[0] = 'E';   // NO SEGMENTATION FAULT

	return 0;
}
