//string

#include <stdio.h>

int main (){
	
	char s [10];
	
	printf ("digite algo (scanf convencional):\n"); //ler mais caracteres que o tamanho declarado (se no meio da string n conter espa�o)
	scanf ("%s",s); //n�o � necessario & , AQUI
	fflush(stdin);
	
	printf ("resultado: %s\n\n", s);
	
	printf ("digite algo (scanf Aprimorado):\n");
	scanf ("%9[^\n]s", s); //leitura at� 10 caracteres e poder ultilizar o espa�o agora
	fflush(stdin);
	
	
	printf ("Resultado: %s\n\n", s);
	
}
