#include <stdio.h>
#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD
//#pragma warning(disable:4996)

/*void readline(int matrix[6][6]) {
	for (int i = 0;i < 6;i++) {
		scanf("%d %d %d %d %d %d", matrix[i][0], matrix[i][1], matrix[i][2], matrix[i][3], matrix[i][4], matrix[i][5]);
	}
    return;
}*/
void readline(int matrix[6][6]) {
	for (int i = 0;i < 6;i++) {
		for (int j = 0;j < 6;j++) {
			scanf("%d", &matrix[i][j]);
		}
	}
	return;
}

void printanswer(int answer[4][4]) {
	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 4;j++) {
			printf("%d ", answer[i][j]);
		}
		printf("\n");
	}
	return;
}

int main() {
	int matrix[6][6], answer[4][4], b[3][3];
	int h = 0, k = 0;
	int p = 0, q = 0;
	readline(matrix);
	for (int l = 0;l < 4;l++) {
		for (int m = 0;m < 4;m++) {
			for (int n = l;n < l + 3;n++) {
				for (int o = m;o < m + 3;o++) {
					b[h][k] = matrix[n][o];
					k++;
					if (k == 3) {
						k = 0;
						h++;
						if (h == 3) {
							h = 0;
							if (p < 4) {
								if (q < 4) {
									answer[p][q] = b[0][0] + b[1][0] + b[2][0] - b[0][2] - b[1][2] - b[2][2];
									++q;
								}
								if (q == 4) {
									p++;
									break;
								}
								
							}
							
						}
						
					}
				
				}
				
			}
			
		}
		
	}
	printanswer(answer);
	return 0;
}
/*
3 0 1 2 7 4
1 5 8 9 3 1 
2 7 2 5 1 3 
0 1 3 1 7 8 
4 2 1 6 2 8
2 4 5 2 3 9
 */