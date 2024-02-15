#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char s[1000];
	int index;
	scanf("%s", &s);
	scanf("%d", &index);
	printf("%c", s[index - 1]);

	return 0;
}