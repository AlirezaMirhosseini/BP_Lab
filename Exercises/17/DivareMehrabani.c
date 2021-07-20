#include <stdio.h>
//#include <math.h>
//#include <stdbool.h>
//#include <conio.h>
#include <stdlib.h>
//#include <string.h>
//#include <Windows.h>
//#include <time.h>

//#ifdef _MSC_BUILD
//#define scanf scanf_s
//#endif  _MSC_BUILD

#pragma warning (disable:4996)

int main() {
	int row, cul;
	scanf("%d %d", &row, &cul);
	char matrix[50][50];
	for (int i = 0;i < row;i++)
		scanf("%s", matrix[i]);
	
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < cul;j++) {
			if ((matrix[i][j] == '+' && matrix[i][j + 1] == '+' && matrix[i + 1][j + 1] == '+' && matrix[i + 1][j] == '*') || (matrix[i][j] == '+' && matrix[i][j + 1] == '+' && matrix[i + 1][j + 1] == '*' && matrix[i + 1][j] == '+') || (matrix[i][j] == '+' && matrix[i][j + 1] == '*' && matrix[i + 1][j + 1] == '+' && matrix[i + 1][j] == '+') || (matrix[i][j] == '*' && matrix[i][j + 1] == '+' && matrix[i + 1][j + 1] == '+' && matrix[i + 1][j] == '+')) {
				printf("bad wall");
				exit(0);
			}
		}
	}
	printf("good wall");
	return 0;
}