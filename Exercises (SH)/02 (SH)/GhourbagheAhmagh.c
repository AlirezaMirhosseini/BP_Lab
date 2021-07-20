#include <stdio.h>
//#include <math.h>
//include <stdbool.h>
//#include <conio.h>
#include <stdlib.h>
#include <string.h>
//#include <Windows.h>
/*#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD*/

#pragma warning (disable:4996)


int r, c, e1 = 0, e[600][600], jm[600][600], jn[600][600];
char a[600][600], input[20], f;

int main() {
	scanf("%d*%d\n", &r, &c);
	for (int i = 0;i < r;i++) {
		for (int j = 0;j < c;j++) {
			scanf("%c", &a[i][j]);
			if (a[i][j] == 'E') {
				scanf("(%d)", &e[i][j]);
			}
			if (a[i][j] == 'J') {
				scanf("(%d,%d)", &jm[i][j], &jn[i][j]);
			}
			scanf("%c", &f);
			if (f == '\n') {
				break;
			}
		}
	}
	int m = 0, n = 0, t, y, q = 0;
	do
	{
		while(a[m][n] == 'J' && (strcmp(input, "Location") != 0)) {
			t = m;
			y = n;
			m = jm[t][y];
			n = jn[t][y];
			if (m >= r || m < 0 || n >= c || n < 0) {
				printf("Impossible place!\n");
				m = t;
				n = y;
				break;
			}
			else {
				printf("Jump to (%d,%d)\n", m, n);
			}
		}
		if (a[m][n] == 'C') {
			printf("Frog hunted by crocodile :-/! Energy %d!", e1);
			return 0;
		}
		if (a[m][n] == 'E' && (strcmp(input, "Location") != 0)&&q!=1) {
			e1 += e[m][n];
			if (e1 > 0) {
				printf("Energy %d!\n", e1);
			}
			if (e1 <= 0) {
				printf("Frog died! Energy %d!", e1);
				return 0;
			}
		}
		if (strcmp(input, "Location") == 0) {
			printf("Location (%d,%d)\n", m, n);
		}
		scanf("%s", input);
		q = 0;
		if (strcmp(input, "Up") == 0 && (strcmp(input, "Location") != 0)) {
			t = m;
			m--;
			if (m >= r || m < 0) {
				printf("Impossible place!\n");
				m = t;				
				q = 1;
			}
		}
		if (strcmp(input, "Down") == 0 && (strcmp(input, "Location") != 0)) {
			t = m;
			m++;
			if (m >= r || m < 0) {
				printf("Impossible place!\n");
				m = t;
				q = 1;
			}
		}
		if (strcmp(input, "Left") == 0 && (strcmp(input, "Location") != 0)) {
			y = n;
			n--;
			if (n >= c || n < 0) {
				printf("Impossible place!\n");				
				n = y;
				q = 1;
			}
		}
		if (strcmp(input, "Right") == 0 && (strcmp(input, "Location") != 0)) {
			y = n;
			n++;
			if (n >= c || n < 0) {
				printf("Impossible place!\n");
				n = y;
				q = 1;
			}
		}
	} while (strcmp(input, "Finish") != 0);
	if (strcmp(input, "Finish") == 0) {
		printf("Energy %d!", e1);
		return 0;
	}
	return 0;
}
