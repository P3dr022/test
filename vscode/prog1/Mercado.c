#include <stdio.h>

int main(){

    float valorProd, acresProd, percProd, result;

    printf("\nDigite o valor do produto: ");
    scanf("%f",&valorProd);
    
    if(valorProd>0&&valorProd<2.00){
        result = valorProd + 0.15;
        printf("\nO valor do produto com acrescimo foi R$ %.2f reais.",result);
        
    }else if(valorProd>=2.00&&valorProd<5.00){
        percProd = 2.00/100;
        acresProd = valorProd*percProd;
        result = acresProd+valorProd;
        printf("\nO valor do acrescimo do produto foi de R$ %.2f reais",result);

    }else if(valorProd>=5&&valorProd<20){
        percProd = 10.00/100;
        acresProd = valorProd*percProd;
        result = acresProd+valorProd;
        printf("\nO valor do acrescimo do produto foi de R$ %.2f reais",result);

    }else if(valorProd>=20&&valorProd<28){
        percProd = 8.00/100;
        acresProd = valorProd*percProd;
        result = acresProd+valorProd;
        printf("\nO valor do acrescimo do produto foi de R$ %.2f reais",result);

    }else if(valorProd>=28){
        result = valorProd+2.35;
        printf("O valor do acrescimo do produto foi de R$ %.2f reais",result);
    }
    
    return 0;
}