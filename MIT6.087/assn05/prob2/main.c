#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

int main(){
	struct tnode *root = NULL;

	char ch, fakech, quit = 1;
	int n;
	do{
		printf("\n");
		printf("1 - Add\n");
		printf("2 - Inorder Print\n");
		printf("3 - Preorder Print\n");
		printf("4 - Delete Tree\n");
		printf("0 - Quit\n");
		printf("\n");
		printf("Enter choice: ");

		scanf("%c", &ch);
		scanf("%c", &fakech);

		switch(ch){
			case '1':
				printf("Enter element: ");
				scanf("%d", &n);
				scanf("%c", &fakech);

				root = addnode(root, n);

				break;

			case '2':
				printf("Tree: ");
				inorder(root);
				printf("\n");
				break;

			case '3':
				printf("Tree: ");
				preorder(root);
				printf("\n");
				break;

			case '4':
				deltree(root);
				root = NULL;
				printf("Deleted!\n");
				break;

			case '0':
				quit = 0;
				break;
		}
	} while(quit);

	return 0;
}
