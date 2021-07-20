#include <stdio.h>

int main(void) {
	float a, b, c, d, e, SUM, PRD, AVG;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	scanf("%f", &d);
	scanf("%f", &e);
	SUM = a + b + c + d + e;
	PRD = a * b * c * d * e;
	AVG = (a + b + c + d + e) / 5;

	printf("SUM: %0.2f\n", SUM);
	printf("PRD: %0.2f\n", PRD);
	printf("AVG: %0.2f", AVG);
	return 0;
}