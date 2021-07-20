#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	float x, n, a, sum = 0, M=-11111111111111111111111111111.1, m=999999999999999999999999999999999999.9;
	
	scanf("%f", &n);
	for (int i = 1;i <= n;i++) {
		scanf("%f", &x);
		
		sum += x;
		
		if (x > M)
			M = x;
		if (x < m)
			m = x;
	}
	a = sum / n;
	printf("Max: %0.3f\n", M);
	printf("Min: %0.3f\n", m);
	printf("Avg: %0.3f\n", a);
	return 0;
}