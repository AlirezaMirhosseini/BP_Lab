#include <stdio.h>
//#include <math.h>
//#include <stdbool.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <Windows.h>
//#include <time.h>

//#ifdef _MSC_BUILD
//#define scanf scanf_s
//#endif  _MSC_BUILD

#pragma warning (disable:4996)

int main() {
	int m1, m2, d1, d2, sum = 0, r;
	scanf("%d %d", &m1, &d1);
	scanf("%d %d", &m2, &d2);
	if (m1 == m2) {
		sum = d1 - d2;
	}
	else if (m2 > m1) {
		if (m1 < 7 && m1 < m2) {
			r = 31 - d1;
		}
		else if (m1 < 12 && m1 < m2) {
			r = 30 - d1;
		}
		sum += r;
		m1++;
		while (m1 < 7 && m1 < m2) {
			sum += 31;
			m1++;
		}
		while (m1 < 12 && m1 < m2) {
			sum += 30;
			m1++;
		}
		if (m1 == m2) {
			sum += d2;
		}
	}
	else if (m2 < m1) {
		if (m2 < 7 && m2 < m1) {
			r = 31 - d2;
		}
		else if (m2 < 12 && m2 < m1) {
			r = 30 - d2;
		}
		sum += r;
		m2++;
		while (m2 < 7 && m2 < m1) {
			sum += 31;
			m2++;
		}
		while (m2 < 12 && m2 < m1) {
			sum += 30;
			m2++;
		}
		if (m2 == m1) {
			sum += d1;
		}
	}
	if (sum < 0)sum *= -1;
	printf("%d", sum);
	return 0;
}