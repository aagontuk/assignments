#include "bst.h"
#include <stdlib.h>
#include <stdio.h>

static struct tnode* talloc(int data){
	struct tnode *t = (struct tnode*)malloc(sizeof(struct tnode));

	if(t == NULL) return NULL;

	t->left = NULL;
	t->right = NULL;
	t->data = data;

	return t;
}

struct tnode* addnode(struct tnode *root, int data){
	struct tnode *t = NULL;
		
	if(root == NULL){
		t = talloc(data);
		return t;
	}
	else if(data <= root->data){
		root->left = addnode(root->left, data);
	}
	else{
		root->right = addnode(root->right, data);
	}

	return root;
}

void deltree(struct tnode *root){
	if(root == NULL) return;
	deltree(root->left);
	deltree(root->right);
	free(root);
}

void inorder(struct tnode *root){
	if(root != NULL){
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
}

void preorder(struct tnode *root){
	if(root != NULL){
		printf("%d ", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
