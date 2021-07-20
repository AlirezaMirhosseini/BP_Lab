#include <stdio.h>
/*#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD*/
#pragma warning (disable:4996)
void readm1(int m1[100][100], int z, int x) {
	for (int i = 0;i < z;i++) {
		for (int j = 0;j < x;j++) {
			scanf("%d", &m1[i][j]);
		}
	}
	return;
}
void readm2(int m2[100][100], int x, int c) {
	for (int i = 0;i < x;i++) {
		for (int j = 0;j < c;j++) {
			scanf("%d", &m2[i][j]);
		}
	}
	return;
}
void printmatrix(int mj[100][100], int z, int c) {
	for (int i = 0;i < z;i++) {
		for (int j = 0;j < c;j++) {
			printf("%d ", mj[i][j]);
		}
		printf("\n");
	}
	return;
}

int main() {
	int z, x, c, m1[100][100], m2[100][100], mj[100][100] = { 0 };
	scanf("%d %d %d", &z, &x, &c);
	readm1(m1, z, x);
	readm2(m2, x, c);
	for (int i = 0;i < z;i++) {
		for (int j = 0;j < c;j++) {
			mj[i][j] = 0;
			int m = 0, n = 0;
			for (int k = 0;k < x;k++) {
				mj[i][j] += m1[i][m] * m2[n][j];
				n++;
				m++;
			}
		}
	}
	printmatrix(mj, z, c);
	return 0;
}