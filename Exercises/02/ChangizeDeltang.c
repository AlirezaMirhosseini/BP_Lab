#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int q, w, e, r, t, y, u, i, o, p;
	scanf("%d%d\n%d%d\n%d%d\n%d%d\n%d%d", &q, &w, &e, &r, &t, &y, &u, &i, &o, &p);

	if ((q == e) || (q == t) || (q == u) || (q == o) || (e == t) || (e == u) || (e == o) || (t == u) || (t == o) || (u == o)) printf("Yes");
	else if ((w == r) || (w == y) || (w == i) || (w == p) || (r == y) || (r == i) || (r == p) || (y == i) || (y == p) || (i == p)) printf("Yes");
	else if ((q - w == e - r) || (q - w == t - y) || (q - w == u - i) || (q - w == o - p) || (e - r == t - y) || (e - r == u - i) || (e - r == o - p) || (t - y == u - i) || (t - y == o - p) || (u - i == o - p)) printf("Yes");
	else printf("No");

	return 0;
}


