#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int a, s, b, n = 0;
	scanf("%d", &a);
	s = a;
	while (a!=0)
	{
		b = a % 10;
		a /= 10;
		n = (n * 10) + b;
	}
	if (s == n)
		printf("You will be safe");
	else 
		printf("You will die");
	return 0;
}