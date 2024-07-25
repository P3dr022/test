#include<stdio.h>

int main(){

    float valorplaca = 1600, mesada;
    char opc = 's';
    int meses;

    
    while(opc == 's'||opc == 'S'){
    printf("\nVAlor da mesada: ");
    scanf("%f",&mesada);

    while(valorplaca>mesada){
        printf("\nMês: %d || valor da placa: %.2f ||", meses, valorplaca, valorplaca > 0? valorplaca : 0);
        valorplaca-=mesada;
        meses++;
    }
    printf("\nMês: %d || valor da placa: %.2f ||", meses,valorplaca);

     while (getchar() != '\n');

    printf("\nDeseja continuar?(S/N): ");
    opc = getchar();

    while (getchar() != '\n');

    } 
    return 0;
}