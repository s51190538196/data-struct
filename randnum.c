#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"randnum.h"

void randnum(int data[], int N)
{
	srand(time(0));

	int i,j,temp;
	
	for(i=1; i<=N; i++)
	{
		data[i-1] = i;
	}

	for(i=1; i<=N; i++)
	{
		j = rand()%(N + 1 - i) + i;
		temp = data[i-1];
		data[i-1] = data[j-1];
		data[j-1] = temp;
	}
}
