#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct queue_elem{
	struct queue_elem *next;
	int elem;
};

struct queue_elem *queue_head = NULL;

void enqueue(int elem);
int dequeue();
void show_queue();

int main(){
	char ch, fakech;
	bool quit = false;
	int n;

	do{
		printf("\n");
		printf("1 - Enqueue\n");
		printf("2 - Dequeue\n");
		printf("3 - Show Queue\n");
		printf("0 - Quit\n");
		printf("\n");

		printf("Enter: ");
		scanf("%c", &ch);
		scanf("%c", &fakech);

		switch(ch){
			case '1':
				printf("\nEnter Number: ");
				scanf("%d", &n);
				scanf("%c", &fakech);

				enqueue(n);
				
				break;

			case '2':
				printf("\n%d\n", dequeue());
				break;

			case '3':
				show_queue();
				break;

			case '0':
				quit = true;
				break;

		}
	} while(!quit);

	return 0;
}

void enqueue(int elem){
	struct queue_elem *new_elem = (struct queue_elem *)malloc(sizeof(struct queue_elem));

	if(new_elem != NULL){
		new_elem->elem = elem;
		new_elem->next = NULL;

		if(queue_head == NULL){
			queue_head = new_elem;
		}
		else{
			struct queue_elem *p;
			for(p = queue_head; ; p = p->next){
				if(p->next == NULL){
					p->next = new_elem;
					break;
				}
			}
		}
	}
	else{
		printf("Error occured! Memory full?\n");
	}
}

int dequeue(){
	if(queue_head != NULL){
		struct queue_elem *p = queue_head;
		int elem = p->elem;

		queue_head = p->next;
		free(p);
		return elem;
	}
	else{
		return 0;
	}
}

void show_queue(){
	struct queue_elem *p;

	for(p = queue_head; p != NULL; p = p->next){
		(p->next != NULL) ? printf("%d ", p->elem) : printf("%d\n", p->elem);
	}
}
