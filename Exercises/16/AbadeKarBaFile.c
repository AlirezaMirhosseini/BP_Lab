#include <stdio.h>
//#include <math.h>
//#include <stdbool.h>
//#include <conio.h>
#include <stdlib.h>
#include <string.h>
//#include <Windows.h>
/*#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD*/

#pragma warning (disable:4996)


typedef struct fard{
	char FirstName[50];
	char LastName[50];
	int Age;
	char NationalCode[20];
	char FatherName[50];
	char PhoneNumber[30];
	char Address[200];
	struct fard* next;
} fard;

FILE* ptr;
fard* head, * follow = 0, * pre;

void reading();
void writing();

int main(){
	bool loop = true;
	char input[10], answer[5];
	puts("what do you want to do ? (r : Read , w : Write) : ");
	scanf("%s", input);
	getchar();

	if (input[0] == 114){
		ptr = fopen("Abadinput.txt", "rb");
		reading();
		fclose(ptr);
	}
	else if (input[0] == 119){
		for (ptr = fopen("Abadoutput.txt", "wb");loop == true;) {
			writing();
			puts(" do you want to write more information in file ? (y : Yes , n : No");
			scanf("%s", answer);
			getchar();
			if (answer[0] == 110)
				loop = false;
			else
				continue;
		}
		fclose(ptr);
	}
	return 0;
}
void writing() {
	fard info;
	puts("please enter FirstName : ");
	fgets(info.FirstName,50,stdin);
	puts("please enter LastName : ");
	fgets(info.LastName, 50, stdin);
	puts("please enter Age : ");
	scanf("%d", &info.Age);
	getchar();
	puts("please enter NationalCode : ");
	fgets(info.NationalCode, 20, stdin);
	puts("please enter FatherName : ");
	fgets(info.FatherName, 50, stdin);
	puts("please enter PhoneNumber : ");
	fgets(info.PhoneNumber, 30, stdin);
	puts("please enter Address : ");
	fgets(info.Address, 200, stdin);
	fwrite(&info, sizeof(fard), 1, ptr);
	return;
}
void reading() {
	int fread_num;
	fard info;
	while ((fread_num = fread(&info, sizeof(fard), 1, ptr)) != 0) {
		bool first = true;
		if (first) {
			follow = (fard*)malloc(1 * sizeof(fard));
			*follow = info;
			head = follow;
			first = false;
			head->next = NULL;
			printf("%s", head->FirstName);
			printf("%s", head->LastName);
			printf("%d\n", head->Age);
			printf("%s", head->NationalCode);
			printf("%s", head->FatherName);
			printf("%s", head->PhoneNumber);
			printf("%s\n", head->Address);
		}
		else {
			pre = follow;
			follow = (fard*)malloc(1 * sizeof(fard));
			pre->next = follow;
			follow->next = NULL;
			(*follow) = (info);
			printf("%s", follow->FirstName);
			printf("%s", follow->LastName);
			printf("%d\n", follow->Age);
			printf("%s", follow->NationalCode);
			printf("%s", follow->FatherName);
			printf("%s", follow->PhoneNumber);
			printf("%s\n", follow->Address);
		}
	}
	return;
}