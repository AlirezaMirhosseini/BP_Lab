#include <stdio.h>
#include <math.h>
#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD

int main() {
	int counter, a[100], z = 0;
	scanf("%d", &counter);
	for (int i = 0;i < counter;i++) {
		scanf("%d", &a[i]);
	}
	for (int k = 0;k < counter;k++) {
		if (a[k] <= 0)z++;
	}
	if (z == counter) {
		printf("0");
		return 0;
	}
	int n, sum, max = 0;
	for (int i = 0;i < counter;i++) {
		for (int j = i + 1;j <= counter;j++) {
			n = j;
			sum = 0;
			for (int m = i;m < n;m++) {
				sum += a[m];
			}
			if (sum > max)max = sum;			
		}
	}
	printf("%d", max);
	return 0;
}