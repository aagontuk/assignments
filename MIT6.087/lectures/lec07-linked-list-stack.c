#include <stdio.h>
#include <stdlib.h>

struct stack_elem{
	struct stack_elem *next;
	int elem;
};

struct stack_elem *stack_head = NULL;

void push(int elem);
int pop();
void show_stack();

int main(){
	char ch, fakech, quit = 0;
	int n;
	do{
		printf("\n");
		printf("1 - Push\n");
		printf("2 - Pop\n");
		printf("3 - Show\n");
		printf("0 - Quit\n");
		printf("\n");

		printf("Enter: ");
		scanf("%c", &ch);
		scanf("%c", &fakech);

		switch(ch){
			case '1':
				printf("Enter Number: ");
				scanf("%d", &n);
				scanf("%c", &fakech);

				push(n);

				break;

			case '2':
				printf("\n%d\n", pop());
				break;

			case '3':
				show_stack();
				break;

			case '0':
				quit = 1;
				break;
		}
	} while(!quit);

	return 0;
}

void push(int elem){
	struct stack_elem *new_elem = (struct stack_elem*)malloc(sizeof(struct stack_elem));

	if(new_elem != NULL){
		new_elem->next = stack_head;
		new_elem->elem = elem;
		stack_head = new_elem;
	}
	else{
		printf("Memory full!\n");
	}
}

int pop(){
	struct stack_elem *p = stack_head;

	if(p != NULL){
		int elem = p->elem;
		stack_head = p->next;
		free(p);
		return elem;
	}
	else{
		return 0;
	}
}

void show_stack(){
	struct stack_elem *p;
	for(p = stack_head; p != NULL; p = p->next){
		(p->next != NULL) ? printf("%d ", p->elem) : printf("%d\n", p->elem);
	}
}
