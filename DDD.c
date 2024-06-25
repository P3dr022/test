#include<stdio.h>

float prefixiNum(int prefixo){
    float valorMin = 0;
     if(prefixo==54||prefixo==598||prefixo==595||prefixo==56){
        valorMin = 1.90;
    }else if(prefixo==49||prefixo==33||prefixo==44){
        valorMin = 2.00;
    }else if(prefixo==1){
        valorMin = 2.10;
    }else{
        valorMin = 2.30;
    }
    return valorMin;
}


int main(){
    int prefixo, contmin;
    float valorMin; 
    float result;
    int regg;
    char opc = 's';

    while (opc=='s'||opc=='S'){  
        
    printf("\nDigite o numero do prefixo: ");
    scanf("%d",&prefixo);
    printf("\nDigite a cont. minutos: ");
    scanf("%d",&contmin);

    if(contmin>=0||contmin<=5){
        valorMin = prefixiNum(prefixo); 
        result = contmin*valorMin; 
        printf("\nValor em min. da chamada: %.2f",result);
    }else if(contmin>5){
        valorMin = prefixiNum(prefixo); 
        regg = contmin - 5;
        result = (contmin*valorMin)+(regg*(valorMin*0.95));
         printf("\nValor em min. da chamada: %.2f",result);
    }
    while (getchar() != '\n');

    printf("\nDeseja continuar?(S/N): ");
    opc = getchar();

    while (getchar() != '\n');
  }

    return 0;
}