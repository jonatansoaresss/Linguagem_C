//string

#include <stdio.h>

int main (){
	
	char s [10];
	
	printf ("digite algo (scanf convencional):\n"); //ler mais caracteres que o tamanho declarado (se no meio da string n conter espaço)
	scanf ("%s",s); //não é necessario & , AQUI
	fflush(stdin);
	
	printf ("resultado: %s\n\n", s);
	
	printf ("digite algo (scanf Aprimorado):\n");
	scanf ("%9[^\n]s", s); //leitura até 10 caracteres e poder ultilizar o espaço agora
	fflush(stdin);
	
	
	printf ("Resultado: %s\n\n", s);
	
}
