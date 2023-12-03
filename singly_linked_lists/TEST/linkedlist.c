#include <stdio.h>
#include <stdlib.h>

/* A Structure of a varible & another structure */
typedef struct Node
{
        int data;
        struct Node *next;
} node;

int main(void)
{
		/* intilizie the data */
		node *head;
		node *one = NULL;
		node *two = NULL;
		node *three = NULL;

        /* Allocate memory */
		one = malloc(sizeof(struct Node));
		two = malloc(sizeof(struct Node));
		three = malloc(sizeof(struct Node));

		/* give the data a value */
		one->data = 1;
		two->data = 2;
		three->data =3;

		/* linking the nodes */
		one->next = two;
		two->next = three;
		three->next = NULL;

		/* where the linked list beigns */
		head = one;

		if (head != NULL)
		{
				printf("Data at head: %d\n", head->data);
				head = head->next;
		}


		return (0);
}
