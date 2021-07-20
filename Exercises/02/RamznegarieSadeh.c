#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int n, a, b, c, d;
	scanf("%d", &n);
	a = n % 10;
	b = (n % 100) / 10;
	c = (n % 1000) / 100;
	d = n / 1000;
	a = (a + 7) % 10;
	b = (b + 7) % 10;
	c = (c + 7) % 10;
	d = (d + 7) % 10;
	printf("%d%d%d%d",b,a,d,c);
}