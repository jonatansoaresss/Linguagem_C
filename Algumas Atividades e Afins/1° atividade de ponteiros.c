#include <stdio.h>
#include <stdlib.h>

int main (){
	
	
	int *p,*pl,x = 10;
	float y = 15.0;
	
	p = &x;
	
	printf ("*p = %d\n", *p);
	pl=p;
	printf ("pl = %d\n", *pl);
	p = &y;
	
	return 0;
	
	
	
	
	
}
