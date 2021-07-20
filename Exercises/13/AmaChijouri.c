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

long long int prefix_operator(char* charactor);
long long int postfix_operator(char* charactor);

int main() {
    char input[8];
    scanf("%s", input);
    getchar();

    char* operation = (char*)malloc(100 * sizeof(char));
    fgets(operation, 100, stdin);

    if (strcmp(input, "postfix") == 0) {
        printf("%lld", postfix_operator(operation));
    }
    else {
        printf("%lld", prefix_operator(operation));
    }




    return 0;
}

long long int prefix_operator(char* charactor) {

    char flag = (*charactor);

    (charactor) += 2;
    long long int adad_aval = 0;
    long long int adad_dovom = 0;
    if ((*charactor) >= 48 && (*charactor) <= 57) {
        while ((*charactor) >= 48 && (*charactor) <= 57) {
            adad_aval *= 10;
            adad_aval += ((*charactor) - 48);
            (charactor)++;
        }
    }
    else {
        adad_aval = prefix_operator(charactor);
    }
    (charactor)++;
    if ((*charactor) >= 48 && (*charactor) <= 57) {
        while ((*charactor) >= 48 && (*charactor) <= 57) {
            adad_dovom *= 10;
            adad_dovom += ((*charactor) - 48);
            (charactor)++;
        }
    }
    else {
        adad_dovom = prefix_operator(charactor);
    }
    if (flag == '+')
        return adad_aval + adad_dovom;
    else if (flag == '-')
        return adad_aval - adad_dovom;
    else  if (flag == '*')
        return adad_aval * adad_dovom;
    else  if (flag == '/')
        return adad_aval / adad_dovom;
    else if (flag == '^')
        return (long long int) pow(adad_aval, adad_dovom);
    else
        return 0;

}

long long int postfix_operator(char* charactor) {
    long long int tool_array = 0;
    long long int* str;
    long long int* str1 = (long long int*) malloc(tool_array * sizeof(long long int));
    while (*charactor != 48) {
        if (*charactor >= 48 && *charactor <= 57) {
            tool_array++;
            str = (long long int*) malloc(tool_array * sizeof(long long int));
            long long   int i;
            for (i = 0; i < tool_array - 1; i++) {
                str[i] = str1[i];
            }

            free(str1);
            str1 = str;
            long long int a = 0;

            while (*charactor >= 48 && *charactor <= 57) {
                a *= 10;
                a += (*charactor - 48);
                charactor++;
            }
            str1[tool_array - 1] = a;
        }
        else {

            switch (*charactor) {
            case '+':
                str1[tool_array - 2] = str1[tool_array - 2] + str1[tool_array - 1];

                tool_array--;
                str = (long long int*) malloc(tool_array * sizeof(long long int));
                long long  int i;
                for (i = 0; i < tool_array; i++) {
                    str[i] = str1[i];
                }

                free(str1);
                str1 = str;
                break;
            case '-':
                str1[tool_array - 2] = str1[tool_array - 2] - str1[tool_array - 1];

                tool_array--;
                str = (long long int*) malloc(tool_array * sizeof(long long int));
                for (i = 0; i < tool_array; i++) {
                    str[i] = str1[i];
                }

                free(str1);
                str1 = str;
                break;
            case '*':
                str1[tool_array - 2] = str1[tool_array - 2] * str1[tool_array - 1];

                tool_array--;
                str = (long long int*) malloc(tool_array * sizeof(long long int));
                for (i = 0; i < tool_array; i++) {
                    str[i] = str1[i];
                }

                free(str1);
                str1 = str;
                break;
            case '/':
                str1[tool_array - 2] = str1[tool_array - 2] / str1[tool_array - 1];

                tool_array--;
                str = (long long int*) malloc(tool_array * sizeof(long long int));
                for (i = 0; i < tool_array; i++) {
                    str[i] = str1[i];
                }

                free(str1);
                str1 = str;
                break;
            case '^':
                str1[tool_array - 2] = (long long int) pow(str1[tool_array - 2], str1[tool_array - 1]);

                tool_array--;
                str = (long long int*) malloc(tool_array * sizeof(long long int));

                for (i = 0; i < tool_array; i++) {
                    str[i] = str1[i];
                }
                free(str1);
                str1 = str;
                break;
            }
        }
        charactor++;
    }

    return str1[0];
}

/*char arrayvorodi[100], input[100];
int andis = -1;

int string_to_int(char* intstr);
int operation(int x, int y, char OPerator);
void get_input(int* ptr_number, char* ptr_operator, int* ptr_isoperator, int* pte_isnumber);
void reverse(char* inputarray);

int main(){
    char opeRator;
    int inputnum, isoperator = 0, isnumber = 0, x = 0, y = 0, z = 0, REturn = 1, andis2 = 0, * intstr;

    intstr = (int*)malloc(5000 * sizeof(int));

    scanf("%s", input);
    getchar();
    do {

        andis++;
        scanf("%c", &arrayvorodi[andis]);

    } while (arrayvorodi[andis] != '\n');

    if (strcmp(input,"prefix")==0){
        reverse(arrayvorodi);
    }

    andis = 0;

    do {

        get_input(&inputnum, &opeRator, &isoperator, &isnumber);

        if (isnumber == 1){
            intstr[andis2] = inputnum;
            andis2++;
        }

        else if (isoperator == 1){
            andis2--;
            y = intstr[andis2];
            andis2--;
            x = intstr[andis2];
            z = operation(x, y, opeRator);
            intstr[andis2] = z;
            andis2++;
        }

        else{
            printf("%d", intstr[andis2 - 1]);
            REturn = 0;
        }

    } while (REturn == 1);

    free(intstr);





    return 0;
}

int string_to_int(char* intstr) {
    int sum = 0, x;
    for (int i = 11, j = 0; i >= 0; i--, j++) {
        x = intstr[i] - 48;
        sum += (int)x * (int)pow(10, j);
    }
    return sum;
}

int operation(int x, int y, char OPerator) {
    int num=0;
    if (strcmp(input, "postfix") == 0) {
        if (OPerator == 94)
            num = (int)pow(x, y);
        else if (OPerator == 43)
            num = x + y;
        else if (OPerator == 45)
            num = x - y;
        else if (OPerator == 42)
            num = x * y;
        else if (OPerator == 47)
            num = x / y;
        else if (OPerator == 37)
            num = x % y;
        else
            num = 0;

    }
    else {
        if (OPerator == 94)
            num = (int)pow(y, x);
        else if (OPerator == 43)
            num = x + y;
        else if (OPerator == 45)
            num = y - x;
        else if (OPerator == 42)
            num = x * y;
        else if (OPerator == 47)
            num = y / x;
        else if (OPerator == 37)
            num = y % x;
        else
            num = 0;
    }
    return num;
}

void get_input(int* ptr_number, char* ptr_operator, int* ptr_isoperator, int* pte_isnumber) {
    int start, num, j = 11;
    char int_string[12];

    *pte_isnumber = 0;
    *ptr_isoperator = 0;
    if (strcmp(input, "postfix") == 0) {
        while (arrayvorodi[andis] == 32) {
            andis++;
        }

        if (arrayvorodi[andis] == '\n')return;

        if (arrayvorodi[andis] >= 48 && arrayvorodi[andis] <= 57) {
            start = andis;
            while (arrayvorodi[andis] != 32)
                andis++;

            for (int i = (andis - 1); i >= start; i--, j--)
                int_string[j] = arrayvorodi[i];

            for (; j >= 0; j--)
                int_string[j] = 48;

            num = string_to_int(int_string);
            *pte_isnumber = 1;
            *ptr_number = num;
        }
        else {
            *ptr_isoperator = 1;
            *ptr_operator = arrayvorodi[andis];
            andis++;
        }
    }
    else {
        while (arrayvorodi[andis] == 32)
            andis++;

        if (arrayvorodi[andis] == '\n')return;
        if (arrayvorodi[andis] >= 48 && arrayvorodi[andis] <= 57) {
            start = andis;
            while (arrayvorodi[andis] != 32)
                andis++;

            for (int i = start; i < andis; i++, j--)
                int_string[j] = arrayvorodi[i];

            for (; j >= 0; j--)
                int_string[j] = 48;

            num = string_to_int(int_string);
            *pte_isnumber = 1;
            *ptr_number = num;
        }
        else {
            *ptr_isoperator = 1;
            *ptr_operator = arrayvorodi[andis];
            andis++;
        }
    }
    return;
}

void reverse(char* inputarray) {
    int counter = 0;
    char arr2[100];

    while (arrayvorodi[counter] != '\n') {
        counter++;
    }
    counter--;

    for (int i = counter, j = 0; i >= 0; i--, j++) {
        arr2[j] = inputarray[i];
    }

    for (int i = 0; i <= counter; i++) {
        inputarray[i] = arr2[i];
    }
    return;
}*/

