#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
#include"quicksort.h"
#include"partition.h"
#define MAX 10 

void quicksort(int number[], int left, int right) { 
    if(left < right) { 
        int q = partition(number, left, right); 
        quicksort(number, left, q-1); 
        quicksort(number, q+1, right); 
    } 
} 
