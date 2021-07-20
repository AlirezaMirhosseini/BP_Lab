#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int n, x, y;
	scanf("%d", &n);
	if (n % 4 == 1) {
		x = (n / 4) * (-1);
		y = x;
	}
	else if (n % 4 == 2) {
		x = (n / 4) + 1;
		y = (n / 4) * (-1);
	}
	else if (n % 4 == 3) {
		x = (n / 4) + 1;
		y = x;
	}
	else if (n % 4 == 0) {
		x = (n / 4) * (-1);
		y = (n / 4);
	}
	printf("%d %d", x, y);
	return 0;
}