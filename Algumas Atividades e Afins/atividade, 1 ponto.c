
#include <stdio.h>
//Dada uma seqüência de n números reais, determinar os números que compõem a seqüência e o número de vezes que cada um deles ocorre na mesma.Exemplo:
//n = 8
//Seqüência: -1.7,  3.0,  0.0,  1.5,  0.0, -1.7,  2.3, -1,7
//Saída:       
//-1.7 ocorre 3 vezes
//3.0 ocorre 1 vez
//0.0 ocorre 2 vezes
//1.5 ocorre 1 vez
//2.3 ocorre 1 vez

int main (){
	
	int i,a;
	float numeros [8];
	int cont;
	
	int qtde_0 = 0,qtde_1 = 0,qtde_2 = 0,qtde_3 = 0,qtde_4 = 0,qtde_5 = 0,qtde_6 = 0,qtde_7 = 0;
	
	printf ("informe a sequencia de numeros: \n");
	
	for (cont = 0; cont <=7; cont++){
		printf ("informe o %d° valor: ", cont + 1);
		scanf ("%f", &numeros[cont]);	
	}


	
	for (a = 0; a <=7; a++){
		
		if (numeros[a] == numeros[0]){
			qtde_0 = qtde_0 + 1;
		}
		
	}
	
	for (a = 0; a <=7; a++){
		if (numeros[a] == numeros[1]){
			qtde_1 = qtde_1 + 1;
		}
}
	for (a = 0; a <=7; a++){
		if (numeros[a] == numeros[2]){
			qtde_2 = qtde_2 + 1;
		}
	}
	
	for (a = 0; a <=7; a++){
		if (numeros[a] == numeros[3]){
			qtde_3 = qtde_3 + 1;
		}
	}

	for (a = 0; a <=7; a++){
		if (numeros[a] == numeros[4]){
			qtde_4 = qtde_4 + 1;
		}
	}
	
	for (a = 0; a <=7; a++){
		if (numeros[a] == numeros[5]){
			qtde_5 = qtde_5 + 1;
		}
	}
	
	for (a = 0; a <=7; a++){
		if (numeros[a] == numeros[6]){
			qtde_6 = qtde_6 + 1;
		}
	}
	
	for (a = 0; a <=7; a++){
		if (numeros[a] == numeros[7]){
			qtde_7 = qtde_7 + 1;
		}
	}




	printf ("\n\n%.2f ocorreu %d vezes\n",numeros[0],qtde_0);
	printf ("%.2f ocorreu %d vezes\n",numeros[1],qtde_1);
	printf ("%.2f ocorreu %d vezes\n",numeros[2],qtde_2);
	printf ("%.2f ocorreu %d vezes\n",numeros[3],qtde_3);
	printf ("%.2f ocorreu %d vezes\n",numeros[4],qtde_4);
	printf ("%.2f ocorreu %d vezes\n",numeros[5],qtde_5);
	printf ("%.2f ocorreu %d vezes\n",numeros[6],qtde_6);
	printf ("%.2f ocorreu %d vezes\n",numeros[7],qtde_7);

}

