#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<sys/time.h>
#include"bst.h"

struct data *bstinsert(struct data *t, int number);
int search(struct data *pt, int key);

struct data
{
	struct data *Llink; //left subtree
	int  number;	       //node data
	struct data *Rlink; //right subtree
};

void bst(int data[], int N, int M, int number[])
{	
	struct timeval start;
 	struct timeval end;
 	unsigned long diff;
	
	int ans;
	struct data *head;
	head = NULL;
	gettimeofday(&start,NULL);
	for(int i=0; i<N; i++)
	{
		head = bstinsert(head, data[i]);
	}
	gettimeofday(&end,NULL);
 	diff = end.tv_sec-start.tv_sec+ end.tv_usec-start.tv_usec;
	printf("bst:\n");
	printf("building time: %ld sec\n", diff);

	gettimeofday(&end,NULL);
	for(int i=0; i<M; i++)
	{
		ans = search(head, number[i]);
	}
	gettimeofday(&end,NULL);
 	diff = end.tv_sec-start.tv_sec+ end.tv_usec-start.tv_usec;
	printf("query time: %ld sec\n", diff);
}
struct data *bstinsert(struct data *t, int number)
{
	if(t==NULL)
	{
		t = (struct data*)malloc(sizeof(struct data));
		t->Llink = NULL;
		t->Rlink = NULL;
		t->number = number;

		return t;
	}
	if(t->number>number)
	{
		t->Llink = bstinsert(t->Llink,number);
	}
	else
	{
		t->Rlink = bstinsert(t->Rlink,number);
	}
	
	return t;
}

int search(struct data *pt, int key)
{
	if(pt == NULL)
	{
		return 0;
	}
	else if(pt->number==key) return 1;
    	else if(pt->number>key) return search(pt->Llink,key);
    	else if(pt->number<key) return search(pt->Rlink,key);
}