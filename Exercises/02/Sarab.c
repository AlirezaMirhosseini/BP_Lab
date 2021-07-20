#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int x, y, t, z, a = -1;
	scanf("%d", &z);
	for (int i = 0; i < z; i++)
	{
		scanf("\n%d %d", &x, &y);
		while ((x == y) && (x % 2 == 0)) {
			t = x + y;
			printf("%d", t);
			break;
		}

		while ((x == y) && (x % 2 == 1)) {
			t = 2 * x - 1;
			printf("%d", t);
			break;
		}

		while ((x == y + 2) && (x % 2 == 0)) {
			t = x + y;
			printf("%d", t);
			break;
		}

		while ((x == y + 2) && (x % 2 == 1))
		{
			t = x + y - 1;
			printf("%d", t);
			break;
		}

		while ((x != y) && (x != y + 2)) {
			printf("%d", a);
			break;
		}
	}
	
	return 0;
}