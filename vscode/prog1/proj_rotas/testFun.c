#include<stdio.h>


int main(){
    int vetA[] = {1,2,3,4};
    int tamanho = sizeof(vetA) / sizeof(vetA[0]); 
    int soma = 0;
    /*sizeof(vetor) retorna o tamanho total em bytes do vetor, e sizeof(vetor[0])
     retorna o tamanho em bytes de um único elemento do vetor.
      Dividindo esses valores, obtemos o número de elementos no vetor.*/


    for(int i = 0;i<tamanho;i++){
        soma += vetA[i];
    }
    printf("\nSoma dos elementos do vetor: %d",soma);
    
    return 0;
}