#include <stdio.h>
//#include <math.h>
//#include <stdbool.h>
//#include <conio.h>
#include <stdlib.h>
//#include <string.h>
//#include <Windows.h>
/*#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD*/

#pragma warning (disable:4996)

struct Node {
	long long int num;
	struct Node* next;
};
void append(struct Node** head, long long int value) {
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->num = value;
	newnode->next = 0;
	if (*head == 0) {
		*head = newnode;
		return;
	}
	struct Node* last = *head;
	while (last->next != NULL) {
		last = last->next;
	}
	last->next = newnode;
	return;
}
void pop(struct Node** head) {
	struct Node* nod = 0, * last = 0;
	if (*head == NULL) {
		printf("stack is empty\n");
		return;
	}	
	if ((*head)->next == NULL) {
		printf("%lld\n", (*head)->num);
		(*head) = NULL;		
		free(*head);
		return;
	}
	for (nod = *head;nod->next != 0;nod = nod->next) {
		if (nod->next->next == NULL) {
			last = nod->next;
			break;
		}
	}
	printf("%lld\n", last->num);
	nod->next = NULL;
	free(last);
	return;
}
void top(struct Node* head) {
	struct Node* tail = 0;
	if (head == 0) {
		printf("stack is empty\n");
		return;
	}
	for (tail = head;1;tail = tail->next) {
		if (tail->next == 0) {
			printf("%lld\n", tail->num);
			return;
		}
	}
}
int main() {
	struct Node* head = NULL;
	long long int n, a;
	while (1) {
		scanf("%lld", &n);
		if (n == 1) {
			scanf("%lld", &a);
			append(&head, a);
		}
		if (n == 2)pop(&head);
		if (n == 3)top(head);
		if (n == 4)return 0;
	}
	return 0;
}