#include<stdio.h>
#define TF 3

void leitura(int matriz[TF][TF]){
    int i,j;
    for(i=0;i<TF;i++)
        for(j=0;j<TF;j++){
            printf("Digite o valores contido na linha %d e coluna %d: ",i,j);
            scanf("%d",&matriz[i][j]);     
    }
}

void exibe(int matriz[TF][TF]){
    int i,j;
    for(i=0;i<TF;i++){
        printf("\n");
        for(j=0;j<TF;j++)
            printf("%2d  ",matriz[i][j]);
    }
}

void somaLinha(int matriz[TF][TF],int vetsomalin[TF]){
    int i,j;
    int posicao = 0;
    int maior = 0;
    for(i=0;i<TF;i++){
        vetsomalin[i] = 0;
        printf("\nlinha %d: ",i);
       for(j=0;j<TF;j++){
       vetsomalin[i] += matriz[i][j];
            printf("%2d  ",matriz[i][j]);     
    }
        printf("Total linha: %d",vetsomalin[i]);
        if(vetsomalin[i]>maior){
            maior=vetsomalin[i];
            posicao = i;
        }
    }
    printf("\nMaior soma %d da linha eh %d",maior, posicao);
}

int main(){
    int mat[TF][TF];
    int vetsomalin[TF];  
    int opc = 0;
    while (opc!=4){
        printf("\n\n1 - Leitura da matriz");
        printf("\n2 - Exibe matriz");
        printf("\n3 - Calcula linha");
        printf("\n4 - Sair");
        printf("\nOpcao? "); scanf("%d",&opc);
        switch (opc){
        case 1:
            leitura(mat);
            break;
        case 2:
            exibe(mat);
            break;
        case 3:
            somaLinha(mat, vetsomalin);
            break;
        }
        
    }
    
}