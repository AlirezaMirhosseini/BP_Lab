#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int i, n, x, y, t;
	scanf("%d", &n);
	for (i = 1;i <= n;i++) {
		scanf("\n%d %d", &x, &y);
		while (1) {
			if ((x == y) && (x % 2 == 0)) {
				t = x + y;
				printf("%d\n", t);
				break;
			}
			if ((x == y) && (x % 2 == 1)) {
				t = 2 * x - 1;
				printf("%d\n", t);
				break;
			}
			if ((x == y + 2) && (x % 2 == 0)) {
				t = x + y;
				printf("%d\n", t);
				break;
			}
			if ((x == y + 2) && (x % 2 == 1)) {
				t = x + y - 1;
				printf("%d\n", t);
				break;
			}
			if ((x != y) && (x != y + 2)) {
				t = -1;
				printf("%d\n", t);
				break;
			}
		}
	}
	return 0;
}