#include <stdio.h>
#include <math.h>
#include <stdbool.h>
//#include <conio.h>
#include <stdlib.h>
#include <string.h>
//#include <Windows.h>
/*#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD*/
#pragma warning (disable:4996)

long long int binary(int x) {	
	int r, sum = 0, t = 0, b = 0;
	while (x >= 2) {
		r = x % 2;
		x /= 2;
		t = (int)pow(10, b);
		sum = t * r + sum;
		b++;
	}
	r = x;
	sum = r * (int)pow(10, b) + sum;
	return sum;
}

long long int octal(int x) {
	int r, sum = 0, t = 0, b = 0;
	while (x >= 8) {
		r = x % 8;
		x /= 8;
		t = (int)pow(10, b);
		sum = t * r + sum;
		b++;
	}
	r = x;
	sum = r * (int)pow(10, b) + sum;
	return sum;
}

bool hexadecimal(int a,char s4[500]) {
	long long int i = 0, l = 0, r, k;
	char s[500], q, w[500];
	while (a > 0)
	{
		r = a % 16;
		if (r < 10) {
			s[i] = (int)r + 48;
			w[i] = (int)r + 48;
		}
		if (r >= 10) {
			s[i] = (int)r + 87;
			w[i] = (int)r + 55;
		}
		a /= 16;
		i++;
		l++;
	}
	
	k = l - 1;
	for (int j = 0;j < l / 2;j++) {
		q = s[j];
		s[j] = s[k];
		s[k] = q;
		k--;
	}
	k = l - 1;
	for (int j = 0;j < l / 2;j++) {
		q = w[j];
		w[j] = w[k];
		w[k] = q;
		k--;
	}
	w[l] = '\0';
	s[l] = '\0';
	if ((strcmp(s, s4) == 0)|| (strcmp(w, s4) == 0))
		return true;
	return false;
}

int main() {
	int n;
	int s1, s2;
	char s3[4];
	char s4[500];
	s3[3] = '\0';
	scanf("%d", &n);
	for (int i = 1;i <= n;i++) {
		scanf("%d", &s1);
		scanf("%d", &s2);
		long long int b = binary(s2), o = octal(s2);
		scanf("%s", s3);
		scanf("%s", s4);
		
		hexadecimal(s2,s4);
		long long int s5 = atoi(s4);
		if ((s5 != b && strcmp(s3, "BIN")==0)|| (s5 != o && strcmp(s3, "OCT") == 0) || (hexadecimal(s2, s4) == false) && (strcmp(s3, "HEX") == 0)){
			printf("%d\n", s1);
		}
		/*else if ((s5 != o && strcmp(s3, "OCT") == 0)) {
			printf("%d\n", s1);
		}
		else if ((hexadecimal(s2, s4)==false)&&(strcmp(s3, "HEX") == 0)) {
			printf("%d\n", s1);
		}*/
	}
	return 0;
}