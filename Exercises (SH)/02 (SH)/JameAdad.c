#include <stdio.h>
//#include <math.h>
//include <stdbool.h>
//#include <conio.h>
//#include <stdlib.h>
#include <string.h>
//#include <Windows.h>
/*#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD*/

#pragma warning (disable:4996)

/*void sum(char n1[200], char  n2[200], char hj[300]) {
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
}*/

int main() {
	int count, hj[1000] = { 0 }, max = 0,y,x;

	//input num of counter
	scanf("%d", &count);

	char reshteadad[1000] = { 0 };

	//getting string
	for (int i = 0;i < count;i++) {

		scanf("%s", reshteadad);
		x = strlen(reshteadad);
		if (x > max)max = x;
		
		int j = x - 1, l = 0;

		while (j>=0){

			hj[l] += reshteadad[j] - 48;

			if (hj[l] >= 10) {
				hj[l + 1] += hj[l] / 10;
				hj[l] %= 10;
			}

			j--;
			l++;
		}
		
	}
	// raghame avalesh sefr nabasheh
	y = max + 3;
	while (y > 0){
		if (hj[y] != 0)break;
		
		y--;
	}
	
	// va tamam
	for (; y>=0; y--)
		printf("%d", hj[y]);
	

	


	/*scanf("%s", s1);
	if (n == 1) {
		puts(s1);
		return 0;
	}
	for (int k = 0;k < n - 1;k++) {
		scanf("%s", s2);
		if (strlen(s1) < strlen(s2)) {
			strcpy(sk, s1);
			strcpy(s1, s2);
			strcpy(s2, sk);
		}
		int i = strlen(s1);
		int j = strlen(s2);
		while (j >= 0) {
			s1[i] = s1[i] - 48 + s2[j] - 48;
			a = s1[i];
			if (s1[i] > 9) {
				s1[i] = a % 10;
				s1[i - 1] += a / 10;
			}
			s1[i] += 48;
			i--;
			j--;
		}
		while (i >= 0) {
			s1[i] -= 48;
			a = s1[i];
			if (s1[i] > 9) {
				s1[i] = a % 10;
				s1[i - 1] += a / 10;
			}
			s1[i] += 48;
			i--;
		}
	}
	printf("%s", s1);*/
	return 0;
}