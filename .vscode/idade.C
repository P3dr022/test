#include <stdio.h>

int main (){
    
    int idade = 18;

    printf("Informe sua idade:  ");
    scanf("%d",&idade);

    if(idade >= 18){
        printf("\nindividuo maior de idade.");
        printf("\nAcesso permitido");
    }else{
        printf("\nIndividuo é menor de idade.");
        printf("\nAcesso negado  ");
    }
}