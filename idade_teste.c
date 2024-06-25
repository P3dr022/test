#include <stdio.h>

int main(){

    int idade;

    printf("\nDigite a sua idade: ");
    scanf("%d",&idade);

    if(idade<=0){
        printf("Digite uma idade valida!\n"); 
    }else if(idade>=1&&idade<13){
        printf("O individuo eh uma crianca!\n");   
    }if(idade>=13&&idade<20){
        printf("O individuo eh um Adolecente!\n"); 
    }else if(idade>=20&&idade<65){
        printf("O individuo eh um adulto!\n");
    }if(idade>=65){
        printf("O individuo eh um idoso!\n");
    }
    return 0;
}