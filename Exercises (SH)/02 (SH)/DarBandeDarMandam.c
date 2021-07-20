#include <stdio.h>
//#include <math.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <Windows.h>
/*#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD*/

#pragma warning (disable:4996)

int main() {
	int counter;
	char n[100][100];
	scanf("%d", &counter);
	for (int sc = 0;sc < counter;sc++)scanf("%s", n[sc]);	
	for (int i = 0;i < counter-1;i++) {
		printf("%s to %s: ke ba in dar agar dar bande dar manand, dar manand.\n", n[i], n[i + 1]);
		for (int j = i + 1;j > 0;j--)printf("%s to %s: dar manand?\n", n[j], n[j - 1]);
		for (int k = 0;k <= i;k++)printf("%s to %s: dar manand.\n", n[k], n[k + 1]);			
	}
	return 0;
}