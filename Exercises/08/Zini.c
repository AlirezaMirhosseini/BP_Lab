#include <stdio.h>
/*#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD*/
#pragma warning (disable:4996)

void readmatrix(int m[100][100], int a, int b) {
	for (int i = 0;i < a;i++) {
		for (int j = 0;j < b;j++) {
			scanf("%d", &m[i][j]);
		}
	}
	return;
}

int main() {
	int a, b, m[100][100], counter = 0;
	scanf("%d%d", &a, &b);
	if (a <= 2 || b <= 2) {
		printf("0");
		return 0;
	}
	readmatrix(m, a, b);
	for (int i = 1;i < a - 1;i++) {
		for (int j = 1;j < b - 1;j++) {
			if ((m[i][j] > m[i][j + 1] && m[i][j] > m[i][j - 1] && m[i][j] < m[i + 1][j] && m[i][j] < m[i - 1][j]) || (m[i][j] < m[i][j + 1] && m[i][j] < m[i][j - 1] && m[i][j] > m[i + 1][j] && m[i][j] > m[i - 1][j])) {
				counter++;
			}
		}
	}
	printf("%d", counter);
	return 0;
}