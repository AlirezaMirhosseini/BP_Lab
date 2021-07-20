#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int n, c, i, x, b, a, s = 0;
	scanf("%d", &c);
	for (i = 1;i <= c;i++) {
		scanf("%d", &a);
		x = a - n;
		while (x != 0)
		{
			b = x % 10;
			x /= 10;
			s += b;
		}
	    puts("Yes %d",s);
	    puts("No %d",n);
		n++;
	}

}