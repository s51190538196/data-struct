#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
#include"linklist.h"

struct Node
{
	int data;
	struct Node *link;
};

struct Node *AddHead(struct Node *head, struct Node *current, int value)
{
	current->link = (struct Node*)malloc(sizeof(struct Node));
	current = head -> link;
	current->data = value;
	head->link = current;
	
	return current;
}
struct Node *AddNode(struct Node *current, int value)
{
	current->link = (struct Node*)malloc(sizeof(struct Node));
	current = current->link;
	current->data = value;

	return current;
}
void FindValue(struct Node *head, int value)
{
	struct Node *current = head->link;
	while(current != NULL)
	{
		if(current->data != value)
		{
			current = current->link;
		}
		else
		{
			//printf("Find!!\n");
			break;
		}

        }
	if(current == NULL)
	{
		//printf("Not find~\n");
	}
}

void linklist(int data[], int N, int M, int searchdata[])
{
	struct timeval start;
 	struct timeval end;
 	unsigned long diff;

	struct Node *head;
	head = (struct Node*)malloc(sizeof(struct Node));
	struct Node *current = head;

  	gettimeofday(&start,NULL);
        current = AddHead(head, current, data[0]);
	
	for(int i=1; i<N; i++)
	{
		current = AddNode(current, data[i]);
	}
	gettimeofday(&end,NULL);
 	diff = end.tv_sec-start.tv_sec+ end.tv_usec-start.tv_usec;
	printf("ll:\n");
	printf("building time: %ld sec\n", diff);
	gettimeofday(&start,NULL);
	for(int i=0; i<M; i++)
	{
		FindValue(head, searchdata[i]);
	}
	gettimeofday(&end,NULL);
 	diff = end.tv_sec-start.tv_sec+ end.tv_usec-start.tv_usec;
	printf("query time: %ld sec\n", diff);
	struct Node *tail = current;
	tail->link = NULL;
}