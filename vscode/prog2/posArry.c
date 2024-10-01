// 2- Crie um programa que contenha um array de float contendo 10 elementos. 
// Imprima o endereço de  cada posição desse array.

#include<stdio.h>

int main(){

    float armArry[10]; 
    int i;

    for(i = 0;i < 10; i++){
        armArry[i] = i * 1.5;
    }

    for(i = 0;i < 10;i++){
        printf("\nEndereço de numero %d: %p, valor %.2f ",i,&armArry[i],armArry[i]);
    }
    return 0; 
}