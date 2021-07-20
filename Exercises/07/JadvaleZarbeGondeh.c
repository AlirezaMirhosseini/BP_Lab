#include <stdio.h>
#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD
int main() {
	int radif, soton;
	scanf("%d", &radif);
	soton = radif;
	for (int i = 1;i <= radif;i++) {
		for (int j = 1;j <= soton;j++) {
			printf("%d ", i * j);
		}
		printf("\n");
	}
}