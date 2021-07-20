#include <stdio.h>
int main() {
	float x, x3;
	scanf("%f", &x);
	x3 = x * x * x;
	printf("%0.10f", x3);
	return 0;
}
