#include <stdio.h>
#include <math.h>
#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD

//read matrix

void enter(double a[10][10], int n) {
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {
            scanf("%lf", &a[i][j]);
        }
    }
}
void build(double b[10][10], double a[10][10], int i, int n) {
    int h = 0, k = 0;
    for (int l = 1;l < n;l++) {
        for (int j = 0;j < n;j++) {
            if (j == i)
                continue;
            b[h][k] = a[l][j];
            k++;
            if (k == n - 1) {
                h++;
                k = 0;
            }
        }
    }
}
//calculate determine
double det(double a[10][10], int n) {
    double sum = 0;
    double b[10][10];
    if (n == 2) {
        sum = a[0][0] * a[1][1] - a[0][1] * a[1][0];
        return sum;
    }
    else {
        for (int i = 0;i < n;i++) {
            build(b, a, i, n);
            sum += a[0][i] * pow(-1, i) * det(b, (n - 1));
        }
    }
    return sum;
}
//main function
int main() {
    int counter;
    double d, tak;
    double a[10][10];
    scanf("%d", &counter);
    if (counter == 1) {
        scanf("%lf", &tak);
        printf("%.2lf", tak);
        return 0;
    }
    enter(a, counter);
    d = det(a, counter);
    printf("%.2lf", d);
    return 0;
}