#include <stdio.h>
#include <stdlib.h>

void* Calloc(int n, int size) {
	char *p = (char*)  malloc(n * size);
	for (int i = 0; i < n; i++) {
		p[i] = '\0';
	}
	return (void*) p;
}

int main() {
	int n;
	scanf("%d", &n);
	char* c = (char*) Calloc(n, sizeof(n));
	for (int i = 0; i < n; i++) {
		printf("%c", c[i]);
	}
}
