#include <stdio.h>

int main (){
	
	int n1;
	
	printf("informe um numero de 1 a 7: \n");
	scanf("%d",&n1);
	
	switch (n1){
		case 1: printf ("SEGINDA-FEIRA");
		break;
		case 2: printf ("TERÇA-FEIRA");
		break;
		case 3: printf ("QUARTA-FEIRA");
		break;
		case 4: printf ("QUINTA-FEIRA");
		break;
		case 5: printf ("SEXTA-FEIRA");
		break;	
		
		
		default: printf ("Numero invalido.");
		break;
		
	}
	
	
	
	
	
	
}
