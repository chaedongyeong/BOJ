#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void) {
	int t, x1, y1, r1, x2, y2, r2, result;
	int distanceSquare, additionSquare, subtractSquare;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		distanceSquare = pow(x1 - x2, 2) + pow(y1 - y2, 2);
		additionSquare = pow(r1 + r2, 2);
		subtractSquare = pow(r1 - r2, 2);

		if (subtractSquare < distanceSquare && distanceSquare < additionSquare) {
			result = 2;
		}
		else if (x1 == x2 && y1 == y2 && r1 == r2) { // 이 조건이
			result = -1;
		}
		else if (subtractSquare == distanceSquare || distanceSquare == additionSquare) { // 이 조건의 부분집합이므로 14행 조건이 먼저 와야함!
			result = 1;
		}
		else {
			result = 0;
		}
		printf("%d\n", result);
	}
	
	
}