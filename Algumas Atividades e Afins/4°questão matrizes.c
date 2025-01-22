//4-Escreva um programa em C para multiplicar duas matrizes e armazenar o
//resultado em uma terceira matriz.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (){
	
	int n1[3][3], n2[3][3], resul[3][3];
	int contl,contc;
	
	printf ("informe o valor da primeira matriz:\n");
	for(contl = 0; contl < 3;contl++){
	for (contc = 0;contc < 3;contc++){
		printf ("matriz [%d][%d]:", contl,contc);
		scanf ("%d", &n1[contl][contc]);
	}
	}
	
	printf ("informe o valor da segunda matriz:\n");
		for(contl = 0; contl < 3;contl++){
	for (contc = 0;contc < 3;contc++){
		printf ("matriz [%d][%d]:", contl,contc);
		scanf ("%d", &n2[contl][contc]);
		}
	}
	printf ("A multiplicação das matrizes:");
	for(contl = 0; contl < 3;contl++){
	for (contc = 0;contc < 3;contc++){
		resul[contl][contc] = n1[contl][contc] * n2[contl][contc];
	}
	}
	system ("cls");
		for(contl = 0; contl < 3;contl++){
	for (contc = 0;contc < 3;contc++){
		printf ("os valores da multiplicação da matriz [%d][%d]:%d\n",contl,contc, resul[contl][contc]);
	}
}
}
