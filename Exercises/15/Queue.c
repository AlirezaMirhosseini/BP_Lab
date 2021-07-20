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

typedef struct saf {
	long long int value;
	struct saf* next;
} saf;

void push(saf** head, long long int num) {
	saf*temp = (saf*)malloc(sizeof(saf));
	temp->value = num;
	temp->next = *head;
	*head = temp;
	return;
}

void pop(saf** head) {
	saf* temp = NULL, * prev = NULL;
	saf* tail = (saf*)malloc(sizeof(saf));
	tail = *head;
	if (tail != NULL) {
		for (;tail->next != NULL;tail = tail->next) {

		}
		for (temp = *head;temp->next != NULL;temp = temp->next) {
			prev = temp;
		}
	}
	if (tail == NULL) {
		puts("ERROR0");
		return;
	}
	if (temp == *head) {
		printf("%lld\n", temp->value);
		free(temp);
		*head = NULL;
		return;
	}
	prev->next = NULL;
	tail = prev;
	printf("%lld\n", temp->value);
	free(temp);
	return;
}

void reverse(saf** head){
    saf* pre = NULL;
    saf* cur = *head;
    saf* badi = NULL;
    while (cur != NULL) {
		badi = cur->next;
		cur->next = pre;
        pre = cur;
		cur = badi;
    }
    *head = pre;
	return;
}

void key_to_show_data(saf** head) {
	long long int index, i, count=0;
	scanf("%lld", &index);
	saf* temp =(saf*) malloc(sizeof(saf));
	for (temp = *head;temp != NULL;temp = temp->next) {
		count++;
	}
	reverse(head);
	for (temp = *head, i = 1;temp != NULL && i <= index;temp = temp->next, i++) {
		if (i == index) {
			printf("%lld\n", temp->value);
			reverse(head);
			return;
		}
	}
	printf("ERROR1\n");
	reverse(head);
	return;
}

void data_to_show_key(saf** head) {
	long long int data, index;
	scanf("%lld", &data);
	saf* temp = (saf*)malloc(sizeof(saf));
	reverse(head);
	for (temp = *head, index=1;temp != NULL ;temp = temp->next, index++) {
		if (temp->value == data) {
			printf("%lld\n", index);
			reverse(head);
			return;
		}
	}
	printf("ERROR2\n");
	reverse(head);
	return;
}

void key_to_delete_node(saf** head) {
	long long int index, i;
	scanf("%lld", &index);
	saf* temp = (saf*)malloc(sizeof(saf));
	saf* pre = (saf*)malloc(sizeof(saf));
	for (temp = *head, i = 1;temp != NULL && i <= index;temp = temp->next, i++) {
		if (i == index) {
			if (i == 1) {
				temp = *head;
				*head = (*head)->next;
				free(temp);
				return;
			}
			for (pre = *head;pre->next != NULL;pre = pre->next) {
				if (pre->next == temp)break;
			}
			pre->next = temp->next;
			free(temp);
			return;
		}
	}
	printf("ERROR3\n");
	return;
}

void data_to_delete_node(saf** head) {
	long long int data;
	scanf("%lld", &data);
	saf* temp = (saf*)malloc(sizeof(saf));
	saf* pre = (saf*)malloc(sizeof(saf));
	for (temp = *head;temp != NULL;temp = temp->next) {
		if (temp->value == data) {
			if (temp == *head) {
				*head = (*head)->next;
				free(temp);
				return;
			}
			for (pre = *head;pre->next != NULL;pre = pre->next) {
				if (pre->next == temp)break;
			}
			pre->next = temp->next;
			free(temp);
			return;
		}
	}
	printf("ERROR4\n");
	return;
}

/*void print(saf** head) {
	saf* cur = (saf*)malloc(sizeof(saf));
	puts("\n");
	for (cur = *head;cur != NULL;cur = cur->next) {
		printf("%lld ", cur->value);
	}
	puts("\n");
}*/

int main() {
	saf* head = NULL;
	long long int input,num;
	do {
		scanf("%lld", &input);

		if (input == 1) {
			scanf("%lld", &num);
			push(&head, num);
		}
		if (input == 2) 
			pop(&head);
		
		if (input == 3) 
			key_to_show_data(&head);
		
		if (input == 4) 
			data_to_show_key(&head);
		
		if (input == 5) 
			key_to_delete_node(&head);
		
		if (input == 6) 
			data_to_delete_node(&head);
		
		//if (input == 8)reverse(&head);
		//print(&head);
		if (input == 7) {
			return 0;
		}
	} while (1);

}