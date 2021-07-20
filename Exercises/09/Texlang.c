#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <Windows.h>
/*#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD*/
#pragma warning (disable:4996)

int main() {
	char reshte1[200], reshte2[200], reshte3[200];
	scanf("%s", reshte1);
	scanf("%s", reshte2);
	scanf("%s", reshte3);
	for (int i = 0;i < 195;i += 5) {
		if (reshte1[i] == '*' && reshte1[i + 1] == '*' && reshte1[i + 2] == '*' && reshte1[i + 3] == '*' && reshte1[i + 4] == '*' && reshte2[i] == 'o' && reshte2[i + 1] == 'o' && reshte2[i + 2] == '*' && reshte2[i + 3] == 'o' && reshte2[i + 4] == 'o' && reshte3[i] == 'o' && reshte3[i + 1] == 'o' && reshte3[i + 2] == '*' && reshte3[i + 3] == 'o' && reshte3[i + 4] == 'o'){
			printf("T");			
		}
		if (reshte1[i] == 'o' && reshte1[i + 1] == 'o' && reshte1[i + 2] == '*' && reshte1[i + 3] == 'o' && reshte1[i + 4] == 'o' && reshte2[i] == 'o' && reshte2[i + 1] == '*' && reshte2[i + 2] == '*' && reshte2[i + 3] == '*' && reshte2[i + 4] == 'o' && reshte3[i] == '*' && reshte3[i + 1] == 'o' && reshte3[i + 2] == 'o' && reshte3[i + 3] == 'o' && reshte3[i + 4] == '*') {
			printf("A");			
		}
		if (reshte1[i] == '*' && reshte1[i + 1] == 'o' && reshte1[i + 2] == 'o' && reshte1[i + 3] == 'o' && reshte1[i + 4] == '*' && reshte2[i] == 'o' && reshte2[i + 1] == 'o' && reshte2[i + 2] == '*' && reshte2[i + 3] == 'o' && reshte2[i + 4] == 'o' && reshte3[i] == '*' && reshte3[i + 1] == 'o' && reshte3[i + 2] == 'o' && reshte3[i + 3] == 'o' && reshte3[i + 4] == '*') {
			printf("X");			
		}
		if (reshte1[i] == '*' && reshte1[i + 1] == '*' && reshte1[i + 2] == 'o' && reshte1[i + 3] == '*' && reshte1[i + 4] == '*' && reshte2[i] == '*' && reshte2[i + 1] == 'o' && reshte2[i + 2] == '*' && reshte2[i + 3] == 'o' && reshte2[i + 4] == '*' && reshte3[i] == '*' && reshte3[i + 1] == 'o' && reshte3[i + 2] == 'o' && reshte3[i + 3] == 'o' && reshte3[i + 4] == '*') {
			printf("M");			
		}
		if (reshte1[i] == '*' && reshte1[i + 1] == 'o' && reshte1[i + 2] == 'o' && reshte1[i + 3] == 'o' && reshte1[i + 4] == '*' && reshte2[i] == '*' && reshte2[i + 1] == 'o' && reshte2[i + 2] == '*' && reshte2[i + 3] == 'o' && reshte2[i + 4] == '*' && reshte3[i] == '*' && reshte3[i + 1] == 'o' && reshte3[i + 2] == 'o' && reshte3[i + 3] == 'o' && reshte3[i + 4] == '*') {
			printf("N");			
		}
	}
	return 0;
}