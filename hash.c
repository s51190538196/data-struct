#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define DEFMAXHASH (1<<20)
#define int32 unsigned int

struct dnode
{
	char *key;
	int cnt;
	struct dnode *next;
}

void hash(int data[], int N, int M, int searchdata[])
{
	