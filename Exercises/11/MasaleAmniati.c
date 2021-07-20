#include <stdio.h>
//#include <math.h>
//#include <conio.h>
//#include <stdlib.h>
#include <string.h>
//#include <Windows.h>
/*#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD*/

#pragma warning (disable:4996)

int main() {
	char str[310], hasel[310], str2[310] = { 0 };
	//str[309] = 0;hasel[309] = 0;
	scanf("%s", str);
	strcpy(str2, str);
	//str2 = str;
	int l = strlen(str);
	for (int i = 0;i < l;i++) {
		int c = 0;
		for (int j = 0;j < l;j++) {
			if (str[j] <= 90) {
				if (str[j] == str[i]) {
					c++;
					continue;
				}
				else if(str[j] == str[i] - 32) {
					c++;
					continue;
				}
			}
			else if (str[j] >= 97) {
				if (str[j] == str[i]) {
					c++;
					continue;
				}
				else if (str[j] == str[i] + 32) {
					c++;
					continue;
				}
			}
		}
		if (str[i] <= 90)hasel[i] = ((c * (str[i] - 65) + 1) % 26) + 65;	
		if (str[i] >= 97)hasel[i] = ((c * (str[i] - 97) + 1) % 26) + 97;
	}
	//printf("%s", hasel);
	for (int i = 0;i < l;i++) {
		printf("%c", hasel[i]);
	}
	return 0;
}

