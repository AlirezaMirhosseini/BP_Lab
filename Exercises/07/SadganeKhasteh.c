#include <stdio.h>
#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD
int main() {
	int a, s,b,r,a1,s1;
	scanf("%d\n%d",&a,&s);
	if (a == s)printf("%d = %d", a, s);
	if (a != s) {
		a1 = a;
		s1 = s;
		b = a % 10;
		a /= 10;
		r = s % 10;
		s /= 10;
		if (b > r)printf("%d < %d", s1, a1);
		if (b < r)printf("%d < %d", a1, s1);
		if (b == r) {
			b = a % 10;
			a /= 10;
			r = s % 10;
			s /= 10;
			if (b > r)printf("%d < %d", s1, a1);
			if (b < r)printf("%d < %d", a1, s1);
			if (b == r) {
				b = a % 10;
				a /= 10;
				r = s % 10;
				s /= 10;
				if (b > r)printf("%d < %d", s1, a1);
				if (b < r)printf("%d < %d", a1, s1);
			}

		}



	}
	return 0;
}