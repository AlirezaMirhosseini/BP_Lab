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

struct input {
	int id;
	char name[100];
};

int main() {
	struct input a;
	FILE* ptr;
	ptr = fopen("AzalSampleFile.txt", "r");
	int n;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		fread(&a, sizeof(struct input), 1, ptr);
		//printf("%d:%s\n", a.id, a.name);
	}
	printf("%d:%s\n", a.id, a.name);
	fclose(ptr);
	return 0;
}