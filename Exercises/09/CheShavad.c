#include <stdio.h>
#include <math.h>
//#include <stdbool.h>
//#include <conio.h>
#include <stdlib.h>
#include <string.h>
//#include <Windows.h>
/*#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD*/

#pragma warning (disable:4996)

char arr[6000] = {};

void multiply(char arr[6000], int a);
void shift_to_right(char arr[6000], int a);
void shift_to_left(char arr[6000], int a);
void Delete(char arr[6000], const char* a);
void concatenation(char arr[6000], char a[6000]);

int main() 
{
	gets_s(arr);

	for (;1;) 
	{
		char operaTor = getchar();
		char Case[6000] = {};

		if (operaTor == 42)
		{
			gets_s(Case);
			int counter = atoi(Case);
			multiply(arr, counter);
		}
		else if (operaTor == 43)
		{
			gets_s(Case);
			concatenation(arr, Case);
		}
		else if (operaTor == 45)
		{
			gets_s(Case);
			Delete(arr, Case);
		}
		else if (operaTor == 60)
		{
			gets_s(Case);
			int counter = atoi(Case);
			shift_to_right(arr, counter);
		}
		else if (operaTor == 62)
		{
			gets_s(Case);
			int counter = atoi(Case);
			shift_to_left(arr, counter);
		}
		else if (operaTor == 120)
			break;
	}
	return 0;
}

void multiply(char arr[6000], int counter)
{
	char arr2[6000] = {};
	strcpy(arr2, arr);
	for (int i = 1; i < counter; i++)
		strcat(arr, arr2);
	printf("%s\n", arr);
	return;
}

void concatenation(char arr[6000], char Case[6000])
{
	strcat(arr, Case);
	printf("%s\n", arr);
	return;
}

void Delete(char arr[5000], const char* Case)
{
	char* match;
	int len = strlen(Case);
	if (len == 0)
		printf("%s\n", arr);
	else
	{
		if ((match = strstr(arr, Case)))
		{
			*match = '\0';
			strcat(arr, match + len);
		}
		printf("%s\n", arr);
	}
	return;
}

void shift_to_left(char arr[6000], int counter)
{
	counter %= strlen(arr);
	char arr2[6000] = {};
	strcpy(arr2, arr);
	strcat(arr2, arr);
	int len = strlen(arr2) / 2;
	for (int i = 0; i < len; i++)
		arr[i] = '\0';
	for (int i = 0; i < len; i++)
		arr[i] = arr2[len - counter + i];
	printf("%s\n", arr);
	return;
}

void shift_to_right(char arr[6000], int counter)
{
	counter %= strlen(arr);
	char arr2[6000] = {};
	strcpy(arr2, arr);
	strcat(arr2, arr);
	int len = strlen(arr2) / 2;
	for (int i = 0; i < len; i++)
		arr[i] = '\0';
	for (int i = 0; i < len; i++)
		arr[i] = arr2[counter + i];
	printf("%s\n", arr);
	return;
}

