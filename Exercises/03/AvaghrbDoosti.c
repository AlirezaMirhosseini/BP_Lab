#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int i, sum = 0, n;
	scanf("%d", &n);
	for (i = 1;i <= n / 2;i++) {
		if (n % i == 0)
			sum += i;
	}

	if (sum == n)
		puts("Yea babe");
	else
		puts("No my dear");

	return 0;
}