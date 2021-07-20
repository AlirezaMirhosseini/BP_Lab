#include <stdio.h>
#include <math.h>
#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD
double f1(double x) {
	double a;
	a = x - floor(x);
	return a;
}
double f2(double x) {
	double a;
	a = pow(x, 2) + x;
	return a;
}
double f3(double x) {
	double a;
	a = fabs((-1) * pow(x, 3) + 1) + pow(x, 3);
	return a;
}
int main() {
	int counter, a = 0, s = 0, d = 0;
	double x, y;
	scanf("%d", &counter);
	for (int i = 1;i <= counter;i++) {
		scanf("%lf %lf", &x, &y);
		
		if (fabs( f1(x) - y) <= 0.2)a++;
		if (fabs( f2(x) - y) <= 0.2)s++;
		if (fabs( f3(x) - y) <= 0.2)d++;
	}
	if (a == counter)printf("1\n");
	if (s == counter)printf("2\n");
	if (d == counter)printf("3\n");
	if (a != counter && s != counter && d != counter)
		printf("No ones\n");
	return 0;
}