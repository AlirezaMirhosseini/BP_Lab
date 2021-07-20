#include <stdio.h>
int main() {
	int a, b, l, lf, lz;
	scanf("%d %d %d", &a, &b, &l);
	lf = ((l + 1) / 2) * a + ((l - 1) / 2) * b;
	lz = (l / 2) * (a + b);
	if (l % 2 == 1) {
		printf("%d", lf);
	}else if (l % 2 == 0)
	{
		printf("%d", lz);
	}
	return 0;
}