#ifndef __BST_H__
#define __BST_H__

struct tnode{
	int data;
	struct tnode *left;
	struct tnode *right;
};

struct tnode* addnode(struct tnode *root, int data);
void deltree(struct tnode *root);
void inorder(struct tnode *root);
void preorder(struct tnode *root);

#endif
