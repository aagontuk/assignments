#include "llist.h"
#include <stdio.h>
#include <stdlib.h>

struct node* nalloc(int data){
	struct node *p = (struct node*)malloc(sizeof(struct node));

	if(p != NULL){
		p->data = data;
		p->next = NULL;
	}

	return p;
}

struct node* addfront(struct node *head, int data){
	struct node *p = nalloc(data);

	if(p == NULL) return head;

	p->next = head;
	
	return p;
}

struct node* addback(struct node *head, int data){
	struct node *p = nalloc(data);

	if(p == NULL) return head;

	if(head == NULL){
		head = p;
	}
	else{
		p->next = head->next;
		head->next = p;
	}

	return head;
}

struct node* delnode(struct node *head, struct node *elem){
	if(head == elem) return head->next;

	struct node *p;
	for(p = head; p != NULL; p = p->next){
		if(p->next == elem){
			p->next = elem->next;
			free(elem);
			break;
		}
	}

	return head;
}

void freelist(struct node *head){
	struct node *p, *q;
	
	p = head;
	while(p != NULL){
		q = p;
		p = p->next;
		free(q);
	}
}

void display(struct node *head){
	if(head == NULL){
		printf("Nothing in the list!\n");
	}
	else{
		struct node *p = NULL;
		for(p = head; p != NULL; p = p->next){
			(p->next != NULL) ? printf("%d ", p->data) : printf("%d\n", p->data);
		}
	}
}

struct node* find(struct node *head, int key){
	struct node *p;

	for(p = head; p != NULL; p = p->next){
		if(p->data == key){
			break;
		}
	}

	return p;
}
