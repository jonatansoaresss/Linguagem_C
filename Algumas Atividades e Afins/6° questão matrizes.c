
#include <stdio.h>
//6-Escreva um programa em C para transpor uma matriz
int main(){

    int l,c,trans;
	int i, j;
    printf("informe o nmr de linhas:\n");
    scanf("%d",&l);

    printf("informe o nmr de colunas:\n");
    scanf("%d",&c);

    int mat[l][c];

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++){
            printf("informe o elemento da matriz [%d][%d]\n",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    
		printf("\n\nmatriz normal:\n");
      	for(i = 0; i < l; i++){
        for(j = 0; j < c; j++)
        {
            printf("%d ", mat[i][j]);
        } 
    }
    		trans = l;
    		l = c;
   			c = trans;

		printf("\n\nmatriz transposta:\n");
     for (i = 0; i < l; i++){
        for (j = 0; j < c; j++){
            printf("%d ", mat[j][i]);
        }
       
    }
    
  
}
