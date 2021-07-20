#include <stdio.h>
#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD
int main() {
	int count, n, q = 0;
	scanf("%d", &count);
	for (int j = 1;j <= count;j++) {
		scanf("%d", &n);
		for (int i = 2;i <= n;i++) {
			int k = 0;
			while (n%i == 0)
			{
				n /= i;
				k++;
			}
			if (k == 1) {
				
				if (q == 0) {
					printf("%d", i);
					q++;
				}
				else if (q != 0) {
					printf("*%d", i);
				}
				
				
			}
			if (k > 1) {
				printf("%d^%d", i, k);
			}
		}
	}
	return 0;
}