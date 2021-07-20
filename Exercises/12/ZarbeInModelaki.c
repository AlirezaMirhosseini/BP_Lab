#include <stdio.h>
//#include <math.h>
//include <stdbool.h>
//#include <conio.h>
#include <stdlib.h>
//#include <string.h>
//#include <Windows.h>
/*#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD*/

#pragma warning (disable:4996)

int main() {
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    int** arr1 = (int**)malloc(n1 * sizeof(int*));
    for (int i = 0; i < n1; i++)
        arr1[i] = (int*)malloc(n2 * sizeof(int));

    int** arr2 = (int**)malloc(n2 * sizeof(int*));
    for (int i = 0; i < n2; i++)
        arr2[i] = (int*)malloc(n3 * sizeof(int));

    int** arr3 = (int**)malloc(n1 * sizeof(int*));
    for (int i = 0; i < n1; i++)
        arr3[i] = (int*)malloc(n3 * sizeof(int));

    for (int i = 0;i < n1;i++) {
        for (int j = 0;j < n2;j++)
            scanf("%d", &arr1[i][j]);
    }
    for (int i = 0;i < n2;i++) {
        for (int j = 0;j < n3;j++)
            scanf("%d", &arr2[i][j]);
    }
    for (int r = 0;r < n1;r++) {
        for (int c = 0;c < n3;c++) {
            arr3[r][c] = 0;
            int m = 0, n = 0;
            for (int k = 0;k < n2;k++) {
                arr3[r][c] += arr1[r][m] * arr2[n][c];
                n++;
                m++;
            }
        }
    }
    for (int i = 0;i < n1;i++) {
        for (int j = 0;j < n3;j++)
            printf("%d ", arr3[i][j]);
        printf("\n");
    }
    free(arr1);
    free(arr2);
    free(arr3);
    return 0;
}