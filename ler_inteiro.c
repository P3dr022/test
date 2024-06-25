#include <stdio.h>

int main(){

    int a, b, c;

    printf("\nDigite o valor de numeros inteiros diferentes:  ");
    scanf("%d,%d,%d",&a,&b,&c);

    int menor = a;

    if(b < menor){
        menor = b;
    } 
    if(c < menor){
        menor = b;
    }

    int maior = a;

    if(b < maior){
        maior = b; 
    }
    if(c < maior){
        maior = c;
    }

    int meio = (a+b+c) - menor - maior;// dando erro;

    printf("\nOs numeros em ordens crescentes: %d, %d, %d",menor, meio, maior);

    return 0;

 }