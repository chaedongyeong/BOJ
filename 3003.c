#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n1, n2, n3, n4, n5, n6;
	scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);
	printf("%d ", 1 - n1);
	printf("%d ", 1 - n2);
	printf("%d ", 2 - n3);
	printf("%d ", 2 - n4);
	printf("%d ", 2 - n5);
	printf("%d ", 8 - n6);

	return 0;
}