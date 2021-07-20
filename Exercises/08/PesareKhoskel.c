#include <stdio.h>
/*#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD*/
#pragma warning (disable:4996)
void printmatrixsatri(double msa[7][7]) {
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0;j < 7;j++) {
			printf("%.2lf ", msa[i][j]);
		}
		printf("\n");
	}
	return;
}

int main() {
	double mso[7][7], msa[7][7];
	for (int i = 0;i < 7;i++) {
		for (int j = 0;j < 7;j++) {
			scanf("%lf", &mso[i][j]);
		}
	}
	for (int i = 0;i < 7;i++) {
		for (int j = 0;j < 7;j++) {
			if (i != j ) {
				msa[i][j] = mso[j][i];
			}
			if(i == j){
				msa[i][j] = mso[i][j];
			}
			
		}
	}
	msa[0][3] = mso[0][0] + mso[6][0];
	msa[1][3] = mso[1][1] + mso[5][1];
	msa[2][3] = mso[2][2] + mso[4][2];
	msa[3][3] = mso[3][3] + mso[3][3];
	msa[4][3] = mso[4][4] + mso[2][4];
	msa[5][3] = mso[5][5] + mso[1][5];
	msa[6][3] = mso[6][6] + mso[0][6];
	printf("\n\n\n");
	printmatrixsatri(msa);
	return 0;
}