#include<stdio.h>
#include"binary_search.h"
void binary_search(int data[], int left, int right, int key)
{
  	int mid;
  	if(left<=right)
  	{
    		mid = (left+right)/2;
    		if(key == data[mid])
		{
      			//printf("Find! Position %d\n", mid+1);
    		}
    		else if(key<data[mid])
		{
      			binary_search(data, left, mid-1, key);
    		}
    		else if(key>data[mid])
		{
      			binary_search(data, mid+1, right, key);
    		}
  	}
	if(left>right)
	{
		//printf("Not find.\n");
	}
}
