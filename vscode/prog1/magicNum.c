#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL)); 
    int numero = rand() % 11;
    int numOpc;
    int contador = 0;

        printf("\nDigite um numero de 1 a 10: ");
        scanf("%d",&numOpc);

    while(numero>=0||numero<=10){

        if(numOpc==numero){
            printf("\nNumero de esc. %d correto! Brabo lek!",numOpc);
            printf("\nParabéns! Voce acertou em %d tentativa(s).",contador+1);
        break; 
        }else if(numOpc!=numero){
            printf("\nNumero de esc. %d incorreto! Tente novamente.",numOpc);
            printf("\nDigite um numero de 1 a 10 nov.: ");
            scanf ("%d",&numOpc);
        }
         contador++;
    }
    return 0;
}