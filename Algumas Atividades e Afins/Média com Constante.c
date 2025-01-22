#include <stdio.h>
#define TAMANHO 6

int main (){
	
	float valores [TAMANHO], media = 0, media_final;
	int cont;
	
	printf ("informe os valores:\n\n ");
	
	for (cont = 0; cont <= TAMANHO -1; cont++){
		printf ("informe o %d° valor: ",cont + 1);
		scanf("%f", &valores [cont]);
	}
	for (cont = 0; cont <= TAMANHO-1; cont ++){
		media = media + valores[cont];
	}
	
	media_final = media / TAMANHO;
	
	printf ("a sua media é %.2f",media_final);
	
	 
	return 0;
}
