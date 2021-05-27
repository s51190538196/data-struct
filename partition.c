#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
#include"partition.h"
#define MAX 10 

int partition(int number[], int left, int right) { 
    int i = left - 1; 
    int j;
    int temp;
    for(j = left; j < right; j++) { 
        if(number[j] <= number[right]) { 
            i++; 
            temp = number[j];
	    number[j] = number[i];
	    number[i] = temp;
        } 
    }
    temp=0; 
    temp = number[right];
    number[right] = number[i+1];
    number[i+1] = temp;
 
    return i+1; 
} 
