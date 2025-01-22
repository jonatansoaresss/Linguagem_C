//1- Faça um programa que lê uma matriz de 3 x 3 elementos usando um
//comando for, multiplica cada elemento por 5 e imprime o resultado.
#include <stdio.h>
#include <string.h>
#include <locale.h>
int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int mat[3][3];
	int contl,contc;
	
	
	printf("informe os valores da matriz: \n");
	for (contl = 0; contl < 3; contl++){
		for (contc = 0; contc < 3;contc++){
			
			printf ("[%d][%d]:",contl ,contc);
			scanf ("%d", &mat[contl][contc]);
				mat[contl][contc] = mat[contl][contc] * 5; 
		}
	}
	
		for (contl = 0; contl < 3; contl++){
		for (contc = 0; contc < 3;contc++){
			printf ("\n\nOs valores após a multiplicação de cada índice por 5;\n %d", mat[contl][contc]);
		}
	}
}
