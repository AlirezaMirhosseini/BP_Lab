#include <stdio.h>
#pragma warning(disable:4996)
int main() {
    int n;
    float a = 0, t1 = 1, t2 = 5;
    scanf("%d", &n);
    if (n - 2 > 0) {
        for (int i = 0;i < n - 2;++i) {
            a = (t1 + t2) / 2;
            t1 = t2;
            t2 = a;
        }
        printf("%f", a);
    }
    else if(n==1)
    {
        printf("%f", t1);
    }
    else if (n == 2)
    {
        printf("%f", t2);
    }
    return 0;
}