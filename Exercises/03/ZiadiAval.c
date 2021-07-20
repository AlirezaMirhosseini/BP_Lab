#include <stdbool.h>
#include <stdio.h>
#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD

int main() {
	int num, ragham1 = 0, ragham2 = 0, ragham3 = 0, sum, isnotprime;

	scanf("%d", &num);
	//one digit numbers
	for (int i = 1;i <= 4;i++) {
		if (i == 1)ragham1 = 2;
		else if (i == 2)ragham1 = 3;
		else if (i == 3)ragham1 = 5;
		else if (i == 4)ragham1 = 7;
		sum = ragham1 + ragham2 + ragham3;
		if (sum < num)printf("%d ", sum);
	}
	//two digit numbers
	for (int j = 1;j <= 4;j++) {
		if (j == 1)ragham2 = 2 * 10;
		else if (j == 2)ragham2 = 3 * 10;
		else if (j == 3)ragham2 = 5 * 10;
		else if (j == 4)ragham2 = 7 * 10;
		for (int i = 1;i <= 4;i++) {
			if (i == 1)ragham1 = 2;
			else if (i == 2)ragham1 = 3;
			else if (i == 3)ragham1 = 5;
			else if (i == 4)ragham1 = 7;
			sum = ragham1 + ragham2 + ragham3;
			if (sum < num) {
				isnotprime = 0;
				for (int counter = 2;counter < sum / 2;counter++)
					if (sum % counter == 0)isnotprime = 1;
				if (isnotprime == 0)printf("%d ", sum);
			}
		}
	}
	//three digit numbers
	for (int k = 1;k <= 4;k++) {
		if (k == 1)ragham3 = 2 * 100;
		else if (k == 2)ragham3 = 3 * 100;
		else if (k == 3)ragham3 = 5 * 100;
		else if (k == 4)ragham3 = 7 * 100;
		for (int j = 1;j <= 4;j++) {
			if (j == 1)ragham2 = 2 * 10;
			else if (j == 2)ragham2 = 3 * 10;
			else if (j == 3)ragham2 = 5 * 10;
			else if (j == 4)ragham2 = 7 * 10;
			for (int i = 1;i <= 4;i++) {
				if (i == 1)ragham1 = 2;
				else if (i == 2)ragham1 = 3;
				else if (i == 3)ragham1 = 5;
				else if (i == 4)ragham1 = 7;
				sum = ragham1 + ragham2 + ragham3;
				if (sum < num) {
					isnotprime = 0;
					for (int counter = 2;counter < sum / 2;counter++)
						if (sum % counter == 0)isnotprime = 1;
					if (isnotprime == 0)printf("%d ", sum);
				}
			}
		}
	}
	return 0;
}