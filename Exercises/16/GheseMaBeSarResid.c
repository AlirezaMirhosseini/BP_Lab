#include <stdio.h>
//#include <math.h>
//#include <stdbool.h>
//#include <conio.h>
//#include <stdlib.h>
#include <string.h>
//#include <Windows.h>
/*#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD*/

#pragma warning (disable:4996)

int main() {
	FILE* ptr,*ptr2,*ptr3;
	char m[30],n[30];
	ptr = fopen("input1.txt", "r");
	ptr2 = fopen("input2.txt", "r");
	ptr3 = fopen("output.txt", "w");
	while (fscanf(ptr, "%s", m) != EOF) {
		ptr2 = fopen("input2.txt", "r");
		while (fscanf(ptr2, "%s", n) != EOF){
			if (strcmp(m, n) == 0) {
				fprintf(ptr3,"%s\n",n);
			}
		}
		fclose(ptr2);
	}
	fclose(ptr);
	fclose(ptr2);
	fclose(ptr3);
	return 0;
}