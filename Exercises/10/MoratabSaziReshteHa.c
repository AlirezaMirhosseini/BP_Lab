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
char arr[600][600], arr2[600];

int main()
{
	
	int i=0, counter = 0;

	while (arr[i - 1][0] != 48) 
	{
		scanf("%s", arr[i]);
		counter++;
		++i;
	}

	i = 0;
	while (i < counter) 
	{
		int j = 0;
		while (j < counter)
		{
			int k = 0;
			while (k < counter) 
			{

				if ((arr[j][0] > arr[j + 1][0] && arr[j][0] >= 65 && arr[j][0] <= 90 && arr[j + 1][0] >= 65 && arr[j + 1][0] <= 90) || (arr[j][0] > arr[j + 1][0] && arr[j][0] >= 97 && arr[j][0] <= 122 && arr[j + 1][0] >= 97 && arr[j + 1][0] <= 122) || (arr[j][0] == arr[j + 1][0] && arr[j][1] > arr[j + 1][1]) || (arr[j][0] == arr[j + 1][0] + 32) || (arr[j][0] >= 65 && arr[j][0] <= 90 && arr[j + 1][0] >= 97 && arr[j + 1][0] <= 122 && arr[j][0] + 32 > arr[j + 1][0]) || (arr[j][0] >= 97 && arr[j][0] <= 122 && arr[j + 1][0] >= 65 && arr[j + 1][0] <= 90 && arr[j][0] - 32 > arr[j + 1][0]))
				{
					strcpy(arr2, arr[j]);
					strcpy(arr[j], arr[j + 1]);
					strcpy(arr[j + 1], arr2);
				}
				++k;
			}
			++j;
		}
		++i;
	}

	i = 0;
	while (i < counter) 
	{
		while (arr[i][0] != 48)
		{
			printf("%s ", arr[i]);
			break;
		}
		++i;
	}
			
				


	return 0;
}