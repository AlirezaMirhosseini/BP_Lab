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
    char strs[1000], strp[1000];
	scanf("%s", strs);
	scanf("%s", strp);
	long long int ls = strlen(strs);
	long long int lp = strlen(strp);
	long long int j = 0, counter = 0,a=0;
	for (int i = 0;i < 1000000;i++) {
		if (strs[j] == strp[a]) {			
			counter++;		
			if (counter == lp) {
				printf("Yes");
				break;
			}
		}
		else {
			counter = 0;
			a = -1;
		}
		j++;
		if (j == ls)j = 0;
		a++;
	}
	if (counter != lp) {
		printf("No");
	}








	return 0;
}