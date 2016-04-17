#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "llist.h"

int main(){
	struct node *head = NULL;

	int n;
	char ch, fakech, quit = 1;
	do{
		printf("\n");
		printf("1 - Insert\n");
		printf("2 - Display\n");
		printf("3 - Find\n");
		printf("4 - Delete\n");
		printf("5 - Delete All\n");
		printf("0 - Quit\n");
		printf("\n");
		printf("Enter choice: ");
		
		scanf("%c", &ch);
		scanf("%c", &fakech);

		switch(ch){
			case '1':
				printf("Insert Element: ");
				scanf("%d", &n);
				scanf("%c", &fakech);

				printf("Add front or back?(f/b): ");
				scanf("%c", &ch);
				scanf("%c", &fakech);

				if(ch == 'f'){
					head = addfront(head, n);
				}
				else{
					head = addback(head, n);
				}

				break;

			case '2':
				display(head);
				break;

			case '3':
				printf("Find: ");
				scanf("%d", &n);
				scanf("%c", &fakech);

				printf("Result: %p\n", find(head, n));

				break;

			case '4':
				printf("Delete: ");
				scanf("%d", &n);
				scanf("%c", &fakech);

				struct node *p;
				if((p = find(head, n)) != NULL){
					head = delnode(head, p);
				}
				else{
					printf("Not found in the list!\n");
				}

				break;

			case '5':
				freelist(head);
				head = NULL;
				break;

			case '0':
				quit = 0;
				break;
		}

	} while(quit);

	return 0;
}
