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

int main() {
    int a[10],n;
    int(*ptr) = a;
    for (int i = 0;i < 10;i++) {
        scanf("%d", ptr+i);
    }
    for (int i = 0;i < 9 ;i++) {
        if (*(ptr + i) > *(ptr + i + 1)) {
            n = *(ptr + i);
            *(ptr + i) = *(ptr + i + 1);
            *(ptr + i + 1) = n;
            i = 0;
        }

    }
    for (int i = 0;i < 10;i++) {
        printf("%d ", *(ptr+i));
    }
    return 0;
}