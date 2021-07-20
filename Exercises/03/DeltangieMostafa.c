#include <stdio.h>
#include <math.h>
#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD

int main() {
	long long int x, num, couter, baghimande, pointto9, a, b;

	scanf("%lld", &couter);
	for (int i = 0;i < couter;i++) {

		scanf("%lld", &x);

		num = log10(x) + 1;// for find the number of digits
		pointto9 = num * 9;
		int check = 0;

		for (long long int j = x - pointto9;j < x;j++) {
			long long int sum = 0;

			a = j;

			while (a != 0) {
				baghimande = a % 10;
				sum += baghimande;
				a /= 10;
			}

			b = j + sum;

			if (b == x) {
				check = 1;
			}
		}

		if (check) {
			puts("Yes");
		}
		else {
			puts("No");
		}
			
	}
	return 0;
}