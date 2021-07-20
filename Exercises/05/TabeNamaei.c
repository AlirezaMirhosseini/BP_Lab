#include <stdio.h>
#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD
#include <math.h>
double factoriel(float i) {
	double f = 1;
	for (int x = 2;x <= i;x++) {
		f *= x;
	}
	return f;
}
int main() {
	float num, sum = 0, a;
	scanf("%f\n%f", &a, &num);
	for (int i = 0;i < num;i++) {
		sum += pow(a, i) / factoriel(i);
	}
	printf("%0.3f", sum);
	return 0;
}

