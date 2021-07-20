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

int array[1000000];

int main() {
    long long int n;
    int i, j, max = 0;
    scanf("%lld", &n);
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++)
    {
        int count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (array[i] <= array[j])
                count++;
            else
                break;
        }
        for (int k = i - 1; k >= 0; k--)
        {
            if (array[i] <= array[k])
                count++;
            else
                break;

        }
        int area = array[i] * count;
        if (area > max)
            max = area;
    }

    printf("%d", max);
	return 0;
}