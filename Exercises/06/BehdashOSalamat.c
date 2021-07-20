#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD

void notrip(int x) {
	printf("20");
	return;
}

void sevendaytrip(int x) {
	printf("%d",x);
	return;
}

int trip(int x, int n) {
	int a;
	a = x - n;
	if (a > 0) {
		a = a;
	}
	if (a <= 0) {
		a = 0;
	}
	return a;
}

int main() {
	int grade, day;
	scanf("%d\n%d", &grade, &day);
	if (day == 0)notrip(grade);
	if (day == 7)sevendaytrip(grade);
	if (day != 0 && day != 7)printf("%d", trip(grade, day));
	return 0;
}