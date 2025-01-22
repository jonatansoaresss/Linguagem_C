#include <stdio.h>
#include <stdlib.h>

int main (){
	
int x = 10;
int *p = &x;
int **p2 = &p;

	printf ("p2: %d\n", p2);
	printf ("*p2: %d\n", *p2);
	printf ("**p2: %d\n", **p2);
	
	return 0;
	
	
	
	
}
