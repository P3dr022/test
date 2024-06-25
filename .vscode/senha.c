#include <stdio.h>

int main (){

    int senha = 1234;

    printf("Digite a senha:    ");
    scanf("%d", &senha);

    if(senha == 1234){
        printf("\nAcesso permitido. ");
    }else{
        printf("\nAcesso negado. ");
    }


}