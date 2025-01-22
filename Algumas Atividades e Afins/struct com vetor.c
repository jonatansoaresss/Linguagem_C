//structs com vetores!!!
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 3

struct tipo_pessoa{
	int idade;
	float peso;
	char nome [50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main (){
	
	setlocale(LC_ALL,"portuguese");
	
	tipo_pessoa lista[TAM];
	int i;
	
	for (i=0;i<TAM;i++){
		printf ("Insira os dados (%d):\n", i+1);
		puts ("nome:");
		scanf ("%50[^\n]s",&lista[i].nome);
		fflush(stdin);
		
		puts("Idade: ");
		scanf("%d", &lista[i].idade);
		fflush(stdin);
		
		puts("Peso: ");
		scanf ("%f", &lista[i].peso);
		fflush (stdin);
		
	}
	system ("cls");//limpa 
	
	puts ("Seus Dados:\n");
	for (i =0; i < TAM; i++){
		printf ("---------------------- pessoa 1 -----------------------");
		printf ("\nnome: %s\n",lista[i].nome);
		printf ("idade:%d\n",lista[i].idade);
		printf ("peso: %.2f\n",lista[i].peso);
		
	}
	return 0;
}
