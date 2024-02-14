#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int attend;
	int arr[31] = { 0, };
	for (int i = 0; i < 30; i++) {
		scanf("%d", &attend);
		arr[attend] = attend;
	}
	for (int i = 0; i < 31; i++) {
		if (arr[i] == 0 && i != 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}