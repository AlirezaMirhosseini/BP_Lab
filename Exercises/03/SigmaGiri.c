#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
int main() {
	int i, j, n, m, s = 0;
	scanf("%d\n%d", &m, &n);
	for (i = -10;i <= n;i++) {
		for (j = 1;j <= m;j++) {
			s += (i + j) * (i + j) * (i + j) / (j * j);
		}
	}
	printf("%d", s);
	return 0;
}