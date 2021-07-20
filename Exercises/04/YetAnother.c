#include <stdio.h>
#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD

int main() {
    int counter;
    long long int a, b;
    scanf("%d", &counter);
    for (int i = 1;i <= counter;i++) {
        scanf("%lld %lld", &a, &b);
        if (a == b)puts("0");
        if ((a > b) && (a < b + 10))puts("1");
        if ((b > a) && (b < a + 10))puts("1");
        if(a > b + 10)
        {
            long long int n = 1;
            while (a > b + 10 * n) {
                n++;
            } 
            printf("%lld\n", n);
        }
        
        if (b > a + 10)
        {
            long long int m = 1;
            while (b > a + 10 * m) {
                m++;
            }
            printf("%lld\n", m);
        }



    }
    return 0;
}