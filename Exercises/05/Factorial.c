#include <stdio.h>
#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD
long factoriel(int x) {
	long n = 1;
	for (int i = 2;i <= x;i++) {
		n *= i;
	}
	return n;
}
void chap(long n) {
	printf("%ld", n);
	return;
}
int main() {
	int x;
	scanf("%d", &x);
	chap(factoriel(x));
	return 0;
}
