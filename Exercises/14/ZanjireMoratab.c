#include <stdio.h>
#include <math.h>
#include <stdbool.h>
//#include <conio.h>
#include <stdlib.h>
#include <string.h>
//#include <Windows.h>
/*#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD*/

#pragma warning (disable:4996)

typedef struct fard {
	int index;
	int age;
	float weight;
	char name[30];
	struct fard* next;
} fard;

void push(fard** head, int index, int age, float weight, char name[29]) {
	fard* temp = (fard*)malloc(sizeof(fard));
	temp->index = index;
	temp->age = age;
	temp->weight = weight;
	strcpy(temp->name, name);
	temp->next = *head;
	*head = temp;
	printf("\n added succesfully\n");
	return;
}

void insert(fard**head,fard**tail,int index,int age,float weight,char name[29]) {
	fard* temp = (fard*)malloc(sizeof(fard));
	temp->index = index;
	temp->age = age;
	temp->weight = weight;
	strcpy(temp->name, name);
	temp->next = NULL;
	fard* pre = NULL;
	for (fard* follow = *head;follow != NULL;pre = follow, follow = follow->next) {
		if (follow == *head && follow->index > index) {
			temp->next = *head;
			*head = temp;
			break;
		}
		else if (follow->next == NULL && follow->index < index) {
			follow->next = temp;
			*tail = temp;
			break;
		}
		else if (pre != NULL && pre->index<index && follow->index>index) {
			pre->next = temp;
			temp->next = follow;
			break;
		}
	}
	printf("\n added succesfully\n");
	return;
}

void delet(fard** head, fard** tail, int index) {
	fard* pre = NULL;
	for (fard* follow = *head;follow != NULL;pre = follow, follow = follow->next) {
		if (follow == *head && follow->index == index) {
			*head = (*head)->next;
			free(follow);
			break;
		}
		else if (follow == *tail && pre->index == index)
		{
			pre->next = NULL;
			*tail = pre;
			free(follow);
			break;
		}
		else if (follow->index == index) {
			pre->next = follow->next;
			free(follow);
			break;
		}
	}
	puts("\n deleted successfully\n");
	return;
}

void sort_and_print(fard** head) {
	int aget, indext;
	float weightt;
	char namet[29];
	fard* temp = (fard*)malloc(sizeof(fard));
	fard* cur1 = (fard*)malloc(sizeof(fard));
	fard* cur2 = (fard*)malloc(sizeof(fard));
	for (cur1 = *head;cur1 != NULL;cur1 = cur1->next){
		for (cur2 = cur1->next;cur2 != NULL;cur2 = cur2->next){
			if (cur2->age < cur1->age){

				indext = cur1->index;
				aget = cur1->age;
				weightt = cur1->weight;
				strcpy(namet, cur1->name);

				cur1->index = cur2->index;
				cur1->age = cur2->age;
				cur1->weight = cur2->weight;
				strcpy(cur1->name, cur2->name);

				cur2->index = indext;
				cur2->age = aget;
				cur2->weight = weightt;
				strcpy(cur2->name, namet);
			}
			else if (cur2->age == cur1->age) {
				if (cur2->weight < cur1->weight) {

					indext = cur1->index;
					aget = cur1->age;
					weightt = cur1->weight;
					strcpy(namet, cur1->name);

					cur1->index = cur2->index;
					cur1->age = cur2->age;
					cur1->weight = cur2->weight;
					strcpy(cur1->name, cur2->name);

					cur2->index = indext;
					cur2->age = aget;
					cur2->weight = weightt;
					strcpy(cur2->name, namet);
				}
				else if (cur2->weight == cur1->weight) {
					if (strcmp(cur2->name, cur1->name) < 0) {

						indext = cur1->index;
						aget = cur1->age;
						weightt = cur1->weight;
						strcpy(namet, cur1->name);

						cur1->index = cur2->index;
						cur1->age = cur2->age;
						cur1->weight = cur2->weight;
						strcpy(cur1->name, cur2->name);

						cur2->index = indext;
						cur2->age = aget;
						cur2->weight = weightt;
						strcpy(cur2->name, namet);
					}
				}
			}
		}
	}
	for (temp = *head;temp != NULL;temp = temp->next) {
		printf("%d %0.3f %s\n", temp->age, temp->weight, temp->name);
	}
}

void search(fard** head, char name[29]) {
	fard* patt = (fard*)malloc(sizeof(fard));
	for (patt = *head;patt != NULL;patt = patt->next) {
		if (strcmp(patt->name, name) == 0) {
			printf("%d\n\n", patt->index);
			break;
		}
	}
	if (patt == NULL)puts(" it doesn't exsist");
	return;
}

int main() {
	fard* head = NULL, * tail = NULL, * temp = NULL;
	int option, age, index, counter = 0;
	float weight;
	char name[29];
	bool isindex = false;
	do
	{
		puts(" what do you want to do ? (enter number of option)");
		puts(" 1.insert new case");
		puts(" 2.delete a case");
		puts(" 3.sort and print list");
		puts(" 4.search");
		puts(" 0.exit\n");
		scanf("%d", &option);
		getchar();
		if (option == 1) {
			printf(" enter place:\n");
			scanf("%d", &index);
			printf(" enter age:\n");
			scanf("%d", &age);
			printf(" enter weight:\n");
			scanf("%f", &weight);
			getchar();
			printf(" enter name:\n");
			fgets(name, 29, stdin);
			counter++;
			if (counter == 1) {
				push(&head, index, age, weight, name);
			}
			else {
				insert(&head, &tail, index, age, weight, name);
			}
		}
		if (option == 2) {
			printf(" enter place:\n");
			scanf("%d", &index);
			for (temp = head;temp != NULL;temp = temp->next) {
				if (temp->index == index) {
					isindex = true;
					break;
				}
			}
			if (isindex == false) {
				printf(" place doesn't exsist \n");
			}else {
				delet(&head, &tail, index);
			}
		}
		if (option == 3) {
			sort_and_print(&head);
		}
		if (option == 4) {
			printf(" enter name:\n");
			fgets(name, 29, stdin);
			search(&head, name);
		}
		if (option == 0) {
			/*for (temp = head;temp != NULL;temp = temp->next) {
				printf("%d %d %0.3f %s\n", temp->index, temp->age, temp->weight, temp->name);
			}*/
			return 0;
		}
	} while (1);
	return 0;
}

