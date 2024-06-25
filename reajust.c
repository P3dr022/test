#include <stdio.h>

float verificaAno(int tempServer){
    float bonus = 0.00;
    if(tempServer<1){
        printf("\nSem bonus a receber.");
    }else if(tempServer>=1&&tempServer<=3){
        bonus = 100.00;
    }else if(tempServer>=4&&tempServer<=6){
        bonus = 200.00;
    }else if(tempServer>=7&&tempServer<=10){
        bonus = 300.00;
    }else if(tempServer>10){
        bonus = 500.00;
    }else{
        printf("\nValor ou caracter incorreto.");
    }
        printf("\nBonus de %2.f recebido.",bonus);
    return bonus;
    
}

int main(){

    int tempServe;
    float salario, result, percProd, acresProd, bonus;
    

    printf("Digite o valor do salario: ");
    scanf("%f",&salario);
    printf("Quando anos de contribuicao?: ");
    scanf("%d",&tempServe);
    


    if(salario<=500){
        percProd = 25.00/100;
    }else if(salario>500&&salario<=1000){
        percProd = 20.00/100;
    }else if(salario>1000&&salario<=1500){
        percProd = 15.00/100;
    }else if(salario>1500&&salario<=2000){
        percProd = 10.00/100;
    }else if(salario>2000){
        percProd = 0.00;
    }
        bonus = verificaAno(tempServe);
        acresProd = salario*percProd;
        result = acresProd+salario+bonus;
        printf("\nO valor do acrescimo do salario foi de R$ %.2f reais",result);
    return 0;
}