all: main

main:   main.c randnum.c randnum.h randsearch.c randsearch.h quicksort.c quicksort.h partition.c partition.h binary_search.c binary_search.h bst.c bst.h linklist.c linklist.h
	gcc main.c randnum.c randnum.h randsearch.c randsearch.h quicksort.c quicksort.h partition.c partition.h binary_search.c binary_search.h bst.c bst.h linklist.c linklist.h -o a.out
clean:
	rm -f a.out
