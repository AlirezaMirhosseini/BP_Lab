#include <stdio.h>
int main() {
	int x, y, x1, y1;
	scanf("%d %d\n%d %d", &x, &y, &x1, &y1);
	if (x > x1) {
		printf("Left");
	}if (x1 > x) {
		printf("Right");
	}
	return 0;
}