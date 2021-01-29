#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

unsigned int printLinkedList(struct node *head);

int main(int argc, char **argv)
{
	struct node *nodes[3];

	nodes[0] = (struct node *)malloc(sizeof(struct node));
	nodes[1] = (struct node *)malloc(sizeof(struct node));
	nodes[2] = (struct node *)malloc(sizeof(struct node));

	memset(nodes[0], 0, sizeof(struct node));
	memset(nodes[1], 0, sizeof(struct node));
	memset(nodes[2], 0, sizeof(struct node));

	nodes[0]->data = 10;
	nodes[1]->data = 20;
	nodes[2]->data = 30;

	nodes[0]->next = nodes[1];
	nodes[1]->next = nodes[2];
	nodes[2]->next = 0;
    
    printLinkedList(nodes[0]);
	return 1;
}

unsigned int printLinkedList(struct node *head)
{
	unsigned int count=0;

	while(head)
	{
		count++;
		printf("Iteration #: %d | Value :%d\r\n", count, head->data);
		head = head->next;
	}
    return count;
};
