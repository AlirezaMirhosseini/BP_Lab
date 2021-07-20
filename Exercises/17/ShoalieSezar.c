#include <stdio.h>
//#include <math.h>
//#include <stdbool.h>
//#include <conio.h>
//#include <stdlib.h>
#include <string.h>
//#include <Windows.h>
//#include <time.h>

//#ifdef _MSC_BUILD
//#define scanf scanf_s
//#endif  _MSC_BUILD

#pragma warning (disable:4996)

char str[1000], ch, temp[1000], pass[400];

int main() {

	gets_s(str);
	strcpy(temp, str);
	for (int i = 0;i < 26;i++) {
		for (int j = 0; str[j] != '\0'; j++) {
			ch = str[j];
			if (ch >= 'a' && ch <= 'z') {
				ch = ch - i;
				if (ch < 'a') 
					ch = ch + 'z' - 'a' + 1;
				
				str[j] = ch;
			}
			else if (ch >= 'A' && ch <= 'Z') {
				ch = ch - i;
				if (ch < 'A') 
					ch = ch + 'Z' - 'A' + 1;
				
				str[j] = ch;
			}
		}
		int k = 0;
		while (((str[k] > 'Z' && str[k] < 'A') || (str[k] > 'z' && str[k] < 'a')) && str[k] != '\0') 
			k++;
		
		for (;((str[k] <= 'Z' && str[k] >= 'A') || (str[k] <= 'z' && str[k] >= 'a'))&& str[k] != '\0';k++) {
			int l = 0;
			while (((str[k] <= 'Z' && str[k] >= 'A') || (str[k] <= 'z' && str[k] >= 'a')) && str[k] != '\0') {
				pass[l] = str[k];
				k++;
				l++;
			}
			pass[l] = '\0';
			if (strcmp(pass, "zozagtoor") == 0 || strcmp(pass, "ZOZAGTOOR") == 0) {
				printf("%s", str);
				return 0;
			}
			pass[0] = '\0';
			while (((str[k] > 'Z' && str[k] < 'A') || (str[k] > 'z' && str[k] < 'a')) && str[k] != '\0')
				k++;
			
		}
		strcpy(str, temp);
	}
	return 0;
}