#include <stdio.h>
#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD

int factoriel(int x) {
	int f = 1;
	for (int i = 1;i <= x;i++) {
		f *= i;		
	}
	return f;
}

int formuletarkib(int n, int k) {
	return((factoriel(n)) / (factoriel(k) * factoriel(n - k)));
}

int main() {
	int linenumber;
	scanf("%d", &linenumber);
	
	for (int i = 0;i < linenumber;i++) {
		for (int j = i;j >= 0;j--) {
			printf("%d ", formuletarkib(i, j));
		}
		printf("\n");
	}
	return 0;
}