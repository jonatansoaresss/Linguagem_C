//Um shopping deseja desenvolver um sistema para gerenciar as vagas de estacionamento. As vagas são organizadas em uma matriz onde cada elemento pode ser 0 (vaga livre) ou 1 (vaga ocupada).
//Escreva um programa em C que permita:
//Inicializar uma matriz 8x8 (8 filas de 8 vagas) com todas as vagas livres.
///Exibir o estado atual das vagas.
////Ocupação de uma vaga específica, verificando se ela já está ocupada.
//Liberar uma vaga específica.
//Exibir uma mensagem apropriada se a vaga solicitada já estiver ocupada ou livre (no caso de liberação).
#include <stdio.h>
int main (){
	
	int matriz[8][8] = {{0,0,0,0,0,0,0,0},
						{0,0,0,0,0,0,0,0,},
						{0,0,0,0,0,0,0,0,},
						{0,0,0,0,0,0,0,0,},
						{0,0,0,0,0,0,0,0,},
						{0,0,0,0,0,0,0,0,},
						{0,0,0,0,0,0,0,0,},
						{0,0,0,0,0,0,0,0,}};
	
	int fila,col;
	char resp;
	while (1){
	do{
		printf ("informe a fileira que deseja(0 a 7) (-1 sair):\n");
	scanf ("%d", &fila);
	if (fila == -1){
		break;
	}
	getchar();
	}while(fila < 0 || fila > 7);
	
	printf ("\nAgora nos informe o nmr da vaga (0 a 7):\n");
	scanf ("%d", &col);
	getchar();
	
	if (matriz[fila][col] == 0){
		printf ("o assento disponivel deseja ocupar(s/n):\n");
		scanf("%c", &resp);
		getchar();
	}else {
		printf ("o assento esta ocupado!!!");
		break;
	}
	
	if (resp =='S'){
		matriz [fila][col] = 1;
		printf ("assento reservado!!!\n");
	}else {
		printf ("Ok, obrigado");
		break;
	}
}			

}
