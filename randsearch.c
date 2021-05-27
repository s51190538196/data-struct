#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"randsearch.h"

void randsearch(int searchdata[], int N, int M)
{
	srand(time(0));

	int i;
	
	for(i=0; i<M; i++)
	{
		searchdata[i] = rand()%(10 * N);
	}
}
