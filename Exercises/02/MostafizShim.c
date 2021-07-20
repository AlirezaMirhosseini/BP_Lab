#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int a, b, c, d, e;

	scanf("%ld %ld %ld %ld %ld", &a, &b, &c, &d, &e);
	if ((a > b) && (a > c) && (a < d) && (a < e)) printf("%d", a);
    else if((a > b) && (a > d) && (a < c) && (a < e)) printf("%d", a);
	else if ((a > b) && (a > e) && (a < d) && (a < c)) printf("%d", a);
	else if((a > c) && (a > d) && (a < b) && (a < e)) printf("%d", a);
	else if ((a > c) && (a > e) && (a < b) && (a < d)) printf("%d", a);
	else if((a > d) && (a > e) && (a < b) && (a < c)) printf("%d", a);
	else if ((b > a) && (b > c) && (b < d) && (b < e)) printf("%d", b);
	else if((b > a) && (b > d) && (b < c) && (b < e)) printf("%d", b);
	else if ((b > a) && (b > e) && (b < c) && (b < d)) printf("%d", b);
	else if((b > c) && (b > d) && (b < a) && (b < e)) printf("%d", b);
	else if ((b > c) && (b > e) && (b < a) && (b < d)) printf("%d", b);
	else if((b > d) && (b > e) && (b < a) && (b < c)) printf("%d", b);
	else if ((c > a) && (c > b) && (c < d) && (c < e)) printf("%d", c);
	else if((c > a) && (c > d) && (c < b) && (c < e)) printf("%d", c);
	else if ((c > a) && (b > e) && (c < b) && (c < d)) printf("%d", c);
	else if((c > b) && (c > d) && (c < a) && (c < e)) printf("%d", c);
	else if ((c > b) && (c > e) && (c < a) && (c < d)) printf("%d", c);
	else if((c > d) && (c > e) && (c < a) && (c < b)) printf("%d", c);
	else if ((d > a) && (d > b) && (d < c) && (d < e)) printf("%d", d);
	else if ((d > a) && (d > c) && (d < b) && (d < e)) printf("%d", d);
	else if((d > a) && (d > e) && (d < b) && (d < c)) printf("%d", d);
	else if ((d > b) && (d > c) && (d < a) && (d < e)) printf("%d", d);
	else if((d > b) && (d > e) && (d < a) && (d < c)) printf("%d", d);
	else if ((d > c) && (d > e) && (d < a) && (d < b)) printf("%d", d);
	else if((e > a) && (e > b) && (e < d) && (e < c)) printf("%d", e);
	else if ((e > a) && (e > c) && (e < b) && (e < d)) printf("%d", e);
	else if((e > a) && (e > d) && (e < b) && (e < c)) printf("%d", e);
	else if((e > b) && (e > c) && (e < a) && (e < d)) printf("%d", e);
	else if ((e > b) && (e > d) && (e < a) && (e < c)) printf("%d", e);
	else if((e > c) && (e > d) && (e < a) && (e < b)) printf("%d", e);
	else {
		printf("NULL");
	}
	return 0;
}