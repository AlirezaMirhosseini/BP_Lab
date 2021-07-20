#include <stdio.h>
//#include <math.h>
//#include <stdbool.h>
//#include <conio.h>
//#include <stdlib.h>
#include <string.h>
//#include <Windows.h>
/*#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD*/

#pragma warning (disable:4996)
char str[10000];

void reverse(char str[10000], int length) {
    char r;

    if (length % 2 == 0) {
        for (int k = 0; k < length / 2; k++) {
            r = str[k];
            str[k] = str[length - k];
            str[length - k] = r;
        }
    }
    else {
        for (int k = 0; k <= length / 2; k++) {
            r = str[k];
            str[k] = str[length - k];
            str[length - k] = r;
        }
    }

    for (int i = 0; i <= length; i++)
        printf("%c", str[i]);

    return;
}

int main() {
    
    int c = 0, i;

    fgets(str, 10000, stdin);
    //getchar();
    while (str[c] != '\0') {
        while ((str[c] >= 97 && str[c] <= 122) || (str[c] >= 65 && str[c] <= 90) || (str[c] >= 48 && str[c] <= 57) && (str[c] != '\0')) {
            c++;
        }
        reverse(str, c - 1);

        while (!(str[c] >= 97 && str[c] <= 122) && !(str[c] >= 65 && str[c] <= 90) && !(str[c] >= 48 && str[c] <= 57) && (str[c] != '\0')) {
            printf("%c", str[c]);
            c++;
        }
        i = 0;
        while (i < strlen(str)) {
            str[i] = str[i + c];
            i++;
        }
        c = 0;
    }
    return 0;
}