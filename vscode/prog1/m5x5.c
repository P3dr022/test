#include<stdio.h>
/*   dada uma matriz 5x5 - criar um vetSomaLin[5] e vetSomaCol[5] contendo as somas das linhas
     e das colunas respectivamente
     descobrir a linha com a maior soma
     descobrir a coluna com maior soma */
#define TF 5
void leitura(int m[TF][TF]){
	int i,j;
	for (i=0;i<TF;i++)
	  for (j=0;j<TF;j++){
	  	printf("\nEntre com elemento da lin%d  col%d :",i,j);
	  	scanf("%d",&m[i][j]);
	  }
}
void exibe(int m[TF][TF]){
	int i,j;
	for (i=0;i<TF;i++){
	  printf("\n");
	  for (j=0;j<TF;j++)
	       printf("%2d  ",m[i][j]);
    }
}
void somalinha(int m[TF][TF],int vetSomaLin[TF]){
	int i,j;
	int posicao=0;
	int maior=0;
	for (i=0;i<TF;i++){
	  vetSomaLin[i]=0;
	  printf("\n Linha %d: ",i);
	  for (j=0;j<TF;j++){
	       vetSomaLin[i] += m[i][j];
	       printf("%2d   ",m[i][j]);
      }
      printf("totLin: %d",vetSomaLin[i]);
      if (vetSomaLin[i]>maior){
      	    maior=vetSomaLin[i];
      	    posicao=i;
	  }
    }
    printf("\n Maior soma=%d   da linha=%d",maior,posicao);
}

main(){
	int mat[TF][TF];
	int vetSomaLin[TF];
	int vetSomaCol[TF];
	int opcao=0;
	while (opcao!=5){
		printf("\n\n1- leitura matriz %d x %d",TF,TF);
		printf("\n2- Exibe matriz %d x %d",TF,TF);
		printf("\n3- Calcula somas das linhas e exibe");
		printf("\n4- Calcula somas das colunas e exibe");
		printf("\n5- sair");
		printf("\nOpcao?"); scanf("%d",&opcao);
		switch(opcao){
			case 1: leitura(mat); break;
			case 2: exibe(mat); break;
			case 3: somalinha(mat,vetSomaLin);
			        // descobrir o maior elemento de vetSomaLin e exibir a posicao e o valor 
			        break;
			case 4: //somacoluna(mat,vetSomaCol); 
			        break;
		}
	}
	
}