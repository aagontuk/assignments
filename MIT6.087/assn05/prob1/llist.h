#ifndef __LLIST_H__
#define __LLIST_H__

struct node{
	int data;
	struct node *next;
};

struct node* nalloc(int data);
struct node* addfront(struct node *head, int data);
struct node* addback(struct node *head, int data);
struct node* delnode(struct node* head, struct node *elem);
void freelist(struct node *head);
void display(struct node *head);
struct node* find(struct node *head, int key);

#endif
