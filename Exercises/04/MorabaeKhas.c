#include <stdio.h>
#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD
int main() {
	int n, m;
	scanf("%d", &n);
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= n;j++) {
			m = n / 2 + 1;
			if ((i == 1 && j > 1 && j < n) || (i == n && j > 1 && j < n)) {
				printf("#");
			}
			else if ((j == 1 && i > 1 && i < n) || (j == n && i > 1 && i < n)) {
				printf("#");
			}			
			else if (i == j) {
			 	printf("#");
			}
			else if (i + j == n + 1) {
				printf("#");
			}
			else if (i <= m && j >= m && i + j > n + 1) {
				printf("#");
			}
			else if (i > m && j > m && i < j) {
				printf("#");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
	return 0;
}