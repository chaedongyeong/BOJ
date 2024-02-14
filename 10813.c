#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, m;
	int x, y;
	int savex, savey;
	scanf("%d %d", &n, &m);
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &x, &y);
		savex = arr[x - 1];
		savey = arr[y - 1];
		arr[x - 1] = savey;
		arr[y - 1] = savex;
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}