#include <stdio.h>
#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD
int main() {
	int un, wn;
	scanf("%d", &un);
	if (un == 2 || un == 4 || un == 8 || un == 16 || un == 32 || un == 64)printf("1");
	if (un == 3)printf("3");
	if (un < 8 && un > 4) {
		wn = (un - 4) * 2 + 1;
		printf("%d", wn);
	}
	if (un < 16 && un > 8) {
		wn = (un - 8) * 2 + 1;
		printf("%d", wn);
	}
	if (un < 32 && un > 16) {
		wn = (un - 16) * 2 + 1;
		printf("%d", wn);
	}
	if (un < 64 && un > 32) {
		wn = (un - 32) * 2 + 1;
		printf("%d", wn);
	}
	if (un < 128 && un > 64) {
		wn = (un - 64) * 2 + 1;
		printf("%d", wn);
	}
	return 0;
}