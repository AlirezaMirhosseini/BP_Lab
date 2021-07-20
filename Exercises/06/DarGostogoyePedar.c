#include <stdio.h>
#include <stdbool.h>

#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD

bool isprime(int num) {
	int r, j=2;
	
	for (;j <= num/2;j++) {
		r = num % j;
		if (r == 0) break;		
	}
	if (j > num / 2) {
		return true;
	}
	return false;
}
int sumavg(int num) {
	int sumav = 0, sumar = 0, temp;
	bool mashala = false;
	for (int j = 4;j <= num;j++) {
		sumav = j;
		temp = j;
		while (temp > 0) {
			sumar += (temp % 10);
			temp /= 10;
		}
		for (int i = 2;i <= j;i++) {
			if (j % i == 0 && isprime(i) == true) {
				sumav += i;
			}
		}
		if (sumar + sumav == num) {
			mashala = true;
			break;
		}
		sumar = 0;
		sumav = 0;
	}
	if (mashala)
		return sumar + sumav;
	else
		return -1;
}


int main() {
	int counter, num;
	scanf("%d", &counter);
	for (int i = 1;i <= counter;i++) {
		scanf("%d", &num);
		if (sumavg(num) == num)
			puts("Yes");
		else
			puts("No");
	}


	return 0;
}