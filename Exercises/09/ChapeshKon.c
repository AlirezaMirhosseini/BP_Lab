#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
#include <string.h>
//#include <Windows.h>
/*#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD*/
#pragma warning (disable:4996)
int main() {
	int n;
	char reshte[100][100];
	scanf("%d", &n);

	for (int i =0;i < n;i++) {
		scanf("%s", reshte[i]);
	}	
	for (int i = n-1;i >= 0;i--) {			
		printf("%s ", reshte[i]);
	}
	return 0;
}