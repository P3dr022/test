#include <stdio.h>

int main(){

    int sexo;
    float altura, peso;

    
    printf("Escolha o sexo para analise:   ");
    printf("1 - Homem");
    printf("\n.   ");
    printf("2 - Mulher");

    printf("\nDigite o numero do sexo respectivo:  ");
    scanf("%d",&sexo);

    printf("\nDigite o altura:  ");
    scanf("%f",&altura);

    if(sexo == 1){

        peso = 72.5 * altura - 58;
        printf("\nO peso ideal para o individuo é %.2f e a altura ideal seria %.2f  .",peso, altura); 

    } if(sexo == 2){

        peso = 62.1 * altura - 44.7;
        printf("\nO peso ideal para a mulher seria %.2f e sua altura ideal %.2f ", peso, altura);

    } else { 

        printf("\nOpção não identificado! Por favor, digite um numero valido.");

    }

    return 0;
}