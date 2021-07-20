#include<stdio.h>
#include<math.h>

#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD

int main()
{
	long long int n, k;
	scanf("%lld",&n);
	long long int bound = floor((floor(n / 2) + 1) / 2);
	long long int answer = (bound) * (bound + 1) - floor(n / 2) * bound + floor(n / 3) - bound;
	k = floor(floor(n / 3) / 2);
	answer = answer + (n + 1) * k - 3 * k * (k + 1);
	int temp = floor(n / 3);
	if (temp % 2 == 1)
		answer = answer + floor((n - 3 * (2 * k + 1)) / 2);
	printf("%lld", answer);
	return 0;
}

/*#include <stdio.h>
#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD
int main() {//mostatil
	unsigned int a1, a2, a3, n, counter=0;
	scanf("%u", &n);
	for (a1 = 1;a1 <= n/3;a1++) {
		for (a2 = a1;a2 <= n / 2;a2++) {
			a3 = n - (a1 + a2);
			if (a3 >= a2 && (a1 + a2) > a3 && (a1 + a3) > a2 && (a2 + a3) > a1) {
				counter++;
			}
		}
	}
	printf("%u", counter);
	return 0;
}*/