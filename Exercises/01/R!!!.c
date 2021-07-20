#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	if (a % 6 == 1) {
		printf("1");
	}if (a % 6 == 2) {
		printf("2");
	}if (a % 6 == 3) {
		printf("3");
	}if (a % 6 == 4) {
		printf("4");
	}if (a % 6 ==5) {
		printf("5");
	}if (a % 6 == 0) {
	printf("6");
	}
	return 0;
}
