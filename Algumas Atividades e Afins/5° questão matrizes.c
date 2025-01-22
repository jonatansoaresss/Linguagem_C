//5-Escreva um programa em C para verificar se uma matriz é simétrica ou não.
#include <stdio.h>
#include <locale.h>
int main (){
	
	setlocale(LC_ALL,"portuguese");
	
	int linha,coluna;
	
	printf ("informe a qtde de linhas da sua matriz:\n");
	scanf("%d",&linha);
	printf ("informe a qtde de colunas da sua matriz:\n");
	scanf ("%d",&coluna);
	
	int matriz[linha][coluna];
	
	if (linha !=coluna){
		printf ("sua matriz NÃO é simetrica");
	}
	else {
		printf ("sua matriz e simetrica");
	}
	
}
