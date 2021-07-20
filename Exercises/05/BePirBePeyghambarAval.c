#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD
//aval boodan adad
int prime(int x) {
	int r, i = 2;
	bool isprime = true;
	while (i <= x / 2) {
		r = x % i;
		if (r == 0) break;
		i++;
	}
	if (i > x / 2) 
		return true;	
	return false;
}
//maghloobe adad
int reverse(int x) {
	int b, n = 0;
	while (x != 0)
	{
		b = x % 10;
		x /= 10;
		n = (n * 10) + b;
	}
	return n;
}
//taghire mabna
int basechanger(int a, int s) {
	int m, b, t, sum = 0;
	
	b = 0;
	t = 0;
	while (a >= s) {
		m = a % s;
		a /= s;
		t = (int)pow(10, b);
		sum = (t * m) + sum;
		b++;
	}
	m = a;
	sum = m * (int)pow(10, b) + sum;
	return sum;
}

int main() {
	int counter, base, andiseprime = 0;
	scanf("%d %d", &counter, &base);

	for (int i = 2;1;i++) {
		
		if (reverse(i) == i && prime(i)) {
			andiseprime++;
		}
		if (andiseprime == counter) {
			printf("%d", basechanger(i, base));
			break;
		}
	}


	return 0;
}
