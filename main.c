#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/time.h>
#include"randnum.h"
#include"randsearch.h"
#include"quicksort.h"
#include"binary_search.h"
#include"bst.h"
#include"linklist.h"


int main(int argc, char **argv)
{
	struct timeval start;
 	struct timeval end;
 	unsigned long diff;

	int i=0,j=0,N=0,M=0;
	int *data, *searchdata;

	if(strcmp("1e4", argv[2])==0)
	{
		N = 10000;
		data = (int*)malloc(N*sizeof(int));
		randnum(data,N);
	}
	else if(strcmp("1e5", argv[2])==0)
	{
		N = 100000;
		data = (int*)malloc(N*sizeof(int));
		randnum(data,N);
	}
	else
	{
		N = 1000000;
		data = (int*)malloc(N*sizeof(int));
		randnum(data,N);
	}

	if(strcmp("1e3", argv[4])==0)
	{
		M = 1000;
		searchdata = (int*)malloc(M*sizeof(int));
		randsearch(searchdata,N,M);
        }
	else if(strcmp("1e4", argv[4])==0)
	{
	        M = 10000;
		searchdata = (int*)malloc(M*sizeof(int));
		randsearch(searchdata,N,M);
        }
	else
	{
		M = 100000;
		searchdata = (int*)malloc(M*sizeof(int));
		randsearch(searchdata,N,M);
	}

	if(argc>5 && strcmp("-bst", argv[5])==0)
	{
		bst(data, N, M, searchdata);
	}
	printf("\n");
	if(argc>5 && strcmp("-bs", argv[6])==0)
	{
		gettimeofday(&start,NULL);
		quicksort(data, 0, N-1);
		gettimeofday(&end,NULL);
 		diff = end.tv_sec-start.tv_sec+ end.tv_usec-start.tv_usec;
		printf("bs:\n");
		printf("building time: %ld sec\n", diff);
		gettimeofday(&start,NULL);
		for(i=0; i<M; i++)
		{			
			binary_search(data, 0, N-1, searchdata[i]);
		}
		gettimeofday(&end,NULL);
 		diff = end.tv_sec-start.tv_sec+ end.tv_usec-start.tv_usec;
		printf("query time: %ld sec\n", diff);
		printf("\n");
		i=0;
	}
	
	if(argc>5 && strcmp("-arr",argv[7])==0)
	{
		int *array = (int*)malloc(N*sizeof(int));
		gettimeofday(&start,NULL);
		for(int k=0; k<N; k++)
		{
			array[k] = data[k];
		}
		gettimeofday(&end,NULL);
 		diff = end.tv_sec-start.tv_sec+ end.tv_usec-start.tv_usec;
		printf("arr:\n");
		printf("building time: %ld sec\n", diff);
		gettimeofday(&start,NULL);
		for(i=0; i<M; i++)
		{
			for(j=0; j<N; j++)
			{
				if(data[j] == searchdata[i])
				{
					//printf("Find!Position %d\n", j);
					break;
				}
			}
			if(j == N)
			{
				//printf("Not find.\n");
				j=0;

			}
		}
		gettimeofday(&end,NULL);
 		diff = end.tv_sec-start.tv_sec+ end.tv_usec-start.tv_usec;
		printf("query time: %ld sec\n", diff);
		printf("\n");
		i=0;
	}

	if(argc>5 && strcmp("-ll", argv[8])==0)
	{
		linklist(data, N, M, searchdata);
	}
	printf("\n");
	/*if(argc>5 && strcmp("-hash", argv[9])==0)
	{
		hash(data, N, M, searchdata);
	}*/
	free(data);
	free(searchdata);
	return 0;	
}
	

