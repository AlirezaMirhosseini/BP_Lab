#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	unsigned n, k, a;
	scanf("%u %u", &n, &k);
	if ((n % 2 == 1) && (k <= (n + 1) / 2)) {
		a = 2 * k - 1;
		printf("%u", a);
	}else if ((n % 2 == 1) && (k > (n + 1) / 2)) {
		a = 2 * k - (n + 1);
		printf("%u", a);
	}else if ((n % 2 == 0) && (k <= n / 2)) {
		a = 2 * k - 1;
		printf("%u", a);
	}else if ((n % 2 == 0) && (k > n / 2)) {
		a = 2 * k - n;
		printf("%u", a);
	}
	return 0;
}