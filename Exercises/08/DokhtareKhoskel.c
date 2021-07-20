#include <stdio.h>
#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD
int main() {
	int a[7][7],x;
	for (int i = 0;i < 7;i++) {
		scanf("%d %d %d %d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3], &a[i][4], &a[i][5], &a[i][6]);
	}
	//swap blue with green
	for (int i = 0;i < 7;i++) {
		for (int j = 0;j < 7;j++) {
			if (i < j && i + j < 6) {
				x = a[i][j];
				a[i][j] = a[6 - i][j];
				a[6 - i][j] = x;
			}
		}
	}
	//swap brown with orange
	for (int i = 0;i < 7;i++) {
		for (int j = 0;j < 7;j++) {
			if (i > j && i + j < 6) {
				x = a[i][j];
				a[i][j] = a[i][6 - j];
				a[i][6 - j] = x;
			}
		}
	}
	//print matrix
	for (int i = 0;i < 7;i++) {
		for (int j = 0;j < 7;j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	//easy easy tamam tamam
	return 0;
}