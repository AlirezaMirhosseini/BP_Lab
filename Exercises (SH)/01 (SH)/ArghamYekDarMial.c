#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
int main() {
	int  c, n;
	long int a, b;
	long long int sum = 0;
	n = 1;
	scanf("%ld\n%ld", &a, &b);
	while (a!=0)
	{
		c = a % 10;
		a /= 10;
		sum += c * (long long int) pow(10, n);
		n += 2;
	}
	n = 0;
	while (b!=0)
	{
		c = b % 10;
		b /= 10;
		sum += c * (long long int) pow(10, n);
		n += 2;
	}
	printf("%lld", sum);
	return 0;
}