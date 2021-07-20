#include <stdio.h>
//#include <math.h>
//include <stdbool.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <Windows.h>
/*#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD*/

#pragma warning (disable:4996)

#define SIZE 100

void read(int *array, int size) {
    int i;
    for (i = 0; i < size; i++)
        scanf("%d", array + i);
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print(const int *array, int size) {
    int i;
    
    for (i = 0; i < size; i++)
        printf("%d ", *(array + i));
    
}

void sort(int array[], const int *size) {
    int* end = array + *size , *i;
    for (i = array; i != end - 1; i++)
        if (*i > *(i + 1))
            swap(i, (i + 1));
}

int isSorted(const int array[], const int *size) {
    int i;
    for (i = 0; i < *size - 1; i++)
        if (*(array + i) > *(array + i + 1))
            return 0;
    return 1;
}

int main() {
    int arr[SIZE], len;
    scanf("%d", &len);
    read(arr, len);
    sort(arr, &len);
    printf("%s\n", isSorted(arr, &len) ? "All is good!" : "This isn't going as it's supposed to...");
    print(arr, len);
    return 0;
}