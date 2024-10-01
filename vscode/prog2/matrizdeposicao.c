// 3- Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
// Imprima o  endereço de cada posição dessa matriz.  

#include<stdio.h>
#define TF 3
int main(){
    float matriz[TF][TF];

    for(int i = 0;i < TF;i++){
        for(int j = 0;j < TF;j++){
            printf("\nEndereço de memoria de posição %dx%d: %p ",i+1,j+1,&matriz[i][j]);
        }
    }
 return 0;
}