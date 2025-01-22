//2- Faça um programa que lê um vetor de 3 elementos e uma matriz de 3 x
//3 elementos. Em seguida o programa deve fazer a multiplicação do vetor
//pelas colunas da matriz.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (){
	int v[3];
	int matriz[3][3];
	int contl,contc;
	int contV;

	printf ("informe 3 valores para nosso vetor:\n");
	scanf ("%d %d %d", &v[0],&v[1],&v[2]);
	
	system ("cls");
	
	printf ("agora informe os valores da matriz\n");
	for (contl = 0; contl < 3; contl++){
		for (contc = 0; contc < 3 ; contc++){
			scanf ("%d", &matriz [contl][contc]);
			matriz[contl][contc] = v[contl] * matriz[contl][contc];
		}
	}
		for (contl = 0; contl < 3; contl++){
		for (contc = 0; contc < 3 ; contc++){
			printf ("\n%d\n", matriz[contl][contc]);
}
}
}

