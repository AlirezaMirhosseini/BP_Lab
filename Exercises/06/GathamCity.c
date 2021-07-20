#include <stdio.h>

#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD

long long int bmm(long long int x, long long int n) {
	return x % n ? bmm(n,x%n) : n ;
}

int main() {
	long long int jokernum, gcpdnum;
	scanf("%lld%lld", &jokernum, &gcpdnum);
	if (jokernum < 0)jokernum *= -1;
	if (gcpdnum < 0)gcpdnum *= -1;
	printf("%lld", bmm(gcpdnum, jokernum));
	return 0;
}