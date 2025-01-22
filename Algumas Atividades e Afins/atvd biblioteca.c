#include <stdio.h>
//uma biblioteca possui um sistema para controle de seus livros
//emprestados e devolvidos em 10 categoria diferentes de livros
int main (){
	int categoria[10] = {2,2,2,2,2,2,2,2,2,2};
	int nmr_cate,cont, qtde_livros = 0;
	char op;

	printf ("bem vindo a biblioteca:\n- informamos que no momento so temos 2 livros por categorias!");
	printf ("\n- nossas categorias vão de 0 a 9:\n\n");
	

	while(1){
		do{ 
		printf ("informe o numero da categoria que deseja(-1 sair):\n");
	scanf ("%d",&nmr_cate);
	if (nmr_cate == -1){
		for (cont = 0; cont < 10; cont++){
			printf ("\nna %d categoria:%d livros",cont,categoria[cont]);
		}
		break;
	}
		}while(nmr_cate < 0 || nmr_cate > 9);
	
	getchar();
	do{
		printf ("informe a qtde de livros que deseja (1 ou 2):\n");
		scanf ("%d",&qtde_livros);
	} while(qtde_livros < 1 || qtde_livros >2);
	
	getchar();
	printf ("o que deseja: D - Devolução\n E - Emprestimo\n");
	scanf ("%c", &op);
	getchar();
	if (op == 'E'){
		printf ("emprestimo feito!!!\n\n");
		categoria[nmr_cate] = categoria[nmr_cate] - qtde_livros; 
		system ("cls");
		if (categoria[nmr_cate] < 0){
			printf ("desculpe mas acabaram todos os livros dessa categoria");
			break;
		}
		
	}else if(op == 'D'){
		printf ("devolução feita!!!\n\n");
		categoria[nmr_cate] = categoria[nmr_cate] + qtde_livros;
		system ("cls");
	}if (categoria[nmr_cate] < 0){
			printf ("desculpe mas acabaram todos os livros dessa categoria");
			break;
			
	
	}
	
	
}
	

}

 
