#include <stdio.h>
//#include <math.h>
//#include <conio.h>
//#include <stdlib.h>
#include <string.h>
//#include <Windows.h>
/*#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD*/

#pragma warning (disable:4996)

void sum(char n1[200], char  n2[200], char hj[300]) {
	long long int t1 = strlen(n1);
	long long int t2 = strlen(n2);
	if (t1 > t2) {
		long long int j = t2 - 1;
		long long int i = t1 - 1;
		while (j>=0)
		{
			hj[i] = n1[i] - 48 + n2[j] - 48;
			hj[i] += 48;
			j--;
			i--;
		}
		while (i>=0)
		{
			hj[i] = n1[i] - 48;
			hj[i] += 48;
			i--;
		}		
	}
	if (t1 < t2) {
		long long int j = t2 - 1;
		long long int i = t1 - 1;
		while (i >= 0)
		{
			hj[j] = n1[i] - 48 + n2[j] - 48;
			hj[j] += 48;
			j--;
			i--;
		}
		while (j >= 0)
		{
			hj[j] = n2[j] - 48;
			hj[j] += 48;
			j--;
		}		
	}
	if (t1 == t2) {
		long long int i = t2 - 1;
		long long int j = t1 - 1;
		while (j >= 0)
		{
			hj[i] = n1[i] - 48 + n2[j] - 48;
			hj[i] += 48;
			j--;
			i--;
		}
	}
	printf("%s", hj);
	return;
}

void point(char n1[200], char n2[200], char hz[500]) {
	long long int t1 = strlen(n1);
	long long int t2 = strlen(n2);
	long long int z = t2 + t1 - 1;
	if (t1 == 1)hz = n2;
	else if (t2 == 1)hz = n1;
	else {
		long long int l = 0, j = 0;
		while (j<t2)
		{
			hz[l] = n2[j];
			l++;
			j++;
		}
		while (l < z) {
			hz[l] = 48;
			l++;
		}
	}
	printf("%s", hz);
	return;
}

int main() {
	char k[10], n1[200], n2[200], hj[300] = { 0 }, hz[500] = { 0 };
	scanf("%s", n1);
	scanf("%s", k);
	scanf("%s", n2);
	if (k[0] == '+') {
		sum(n1, n2, hj);
	}
	if (k[0] == '*') {
		point(n1, n2, hz);
	}
	return 0;
}