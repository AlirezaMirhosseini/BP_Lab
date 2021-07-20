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
    int* p;
    long long int n, ss = 0, sd = 0;
    p = (int*)malloc(5000 * sizeof(int));
    scanf("%lld", &n);    
    for (int i = 0;i < n;i++) 
        scanf("%d", (p+i));    
    for (long long  int i = 0, l = n - 1, c = 0;c < n;) {
        if (*(p + i) > *(p + l) && c < n) {
            ss += *(p + i);
            i++;
            c++;
        }else if (c < n) {
            ss += *(p + l);
            l--;
            c++;
        }
        if (*(p + i) > *(p + l) && c < n) {
            sd += *(p + i);
            i++;
            c++;
        }else if(c < n) {
            sd += *(p + l);
            l--;
            c++;
        }
    }
    printf("%lld %lld", ss, sd);
    free(p);
    return 0;
}