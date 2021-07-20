#include <stdio.h>
/*#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD*/
#pragma warning(disable:4996)
int main(void)
{
    unsigned char answers[100], nezam[100], keyvoon[100], shirfarhad[100];
    int counter, nezamgrade = 0, keyvoongrade = 0, shirfarhrhadgrade = 0, maxgrade = 0;
    scanf("%d", &counter);
    scanf("%s", &answers);
    // printf("%s",key);
    for (int i = 0; i < 100; i++)
    {
        switch (i % 6) {
        case 0:
            keyvoon[i] = '3';
            break;
        case 1:
            keyvoon[i] = '3';
            break;
        case 2:
            keyvoon[i] = '1';
            break;
        case 3:
            keyvoon[i] = '1';
            break;
        case 4:
            keyvoon[i] = '2';
            break;
        case 5:
            keyvoon[i] = '2';
            break;

        }
        // printf("%c", keyvoon[i]);
        // printf("%c", key[i]);
    }
    for (int j = 0; j < counter; j++)
    {
        if (answers[j] == keyvoon[j])
            keyvoongrade++;

    }
    // printf("keyvoon:%d\n", nomre_keyvoon);
    for (int i = 0; i < 100; i++)
    {
        switch (i % 3) {
        case 0:
            nezam[i] = '1';
            break;
        case 1:
            nezam[i] = '2';
            break;
        case 2:
            nezam[i] = '3';
            break;

        }
        // printf("%c", nezam[i]);
        // printf("%c", key[i]);
    }
    for (int j = 0; j < counter; j++)
    {
        if (answers[j] == nezam[j])
            nezamgrade++;

    }
    // printf("nezam:%d\n", nomre_nezam);
    for (int i = 0; i < 100; i++)
    {
        switch (i % 4) {
        case 0:
            shirfarhad[i] = '2';
            break;
        case 1:
            shirfarhad[i] = '1';
            break;
        case 2:
            shirfarhad[i] = '2';
            break;
        case 3:
            shirfarhad[i] = '3';
            break;

        }
        // printf("%c", keyvoon[i]);
        // printf("%c", key[i]);
    }
    for (int j = 0; j < counter; j++)
    {
        if (answers[j] == shirfarhad[j])
            shirfarhrhadgrade++;

    }
    // printf("shir:%d\n", nomre_shir);

    if (keyvoongrade >= nezamgrade && keyvoongrade >= shirfarhrhadgrade)
        maxgrade = keyvoongrade;
    else if (nezamgrade >= keyvoongrade && nezamgrade >= shirfarhrhadgrade)
        maxgrade = nezamgrade;
    else if (shirfarhrhadgrade >= keyvoongrade && shirfarhrhadgrade >= nezamgrade)
        maxgrade = shirfarhrhadgrade;
    printf("%d\n", maxgrade);
    if (keyvoongrade >= nezamgrade && keyvoongrade >= shirfarhrhadgrade)
    {

        // printf("%d\n", nomre_keyvoon);
        printf("keyvoon\n");
    }
    if (nezamgrade >= keyvoongrade && nezamgrade >= shirfarhrhadgrade)
    {
        // printf("%d", nomre_keyvoon);
        printf("nezam\n");
    }
    if (shirfarhrhadgrade >= keyvoongrade && shirfarhrhadgrade >= nezamgrade)
    {
        // printf("%d", nomre_shir);
        printf("shir farhad\n");
    }
    return 0;
}
