#include <stdio.h>
int main() {
	int x1,y1,x2,y2,x3,y3;
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	scanf("%d %d", &x3, &y3);
	if ((x1 == x2) && (y2 == y3)) {
		printf("%d %d", x3, y1);
	}if ((x1 == x2) && (y1 == y3)) {
		printf("%d %d", x3, y2);
	}if ((x1 == x3) && (y2 == y3)) {
		printf("%d %d", x2, y1);
	}if ((x1 == x3) && (y1 == y2)) {
		printf("%d %d", x2, y3);
	}if ((x2 == x3) && (y1 == y2)) {
		printf("%d %d", x1, y3);
	}if ((x2 == x3) && (y1 == y3)) {
		printf("%d %d", x1, y2);
	}
	return 0;
}