#include<stdio.h>
#include<math.h>

int main(){
    int meses = 0;
    double divida, aplica ,juros;
    char ops = 's';

    while (ops=='s'||ops=='S'){
    
    printf("\nDigite o valor da divida: ");
    scanf("%lf",&divida);
    printf("\nDigite o valor da aplicacao mensal: ");
    scanf("%lf",&aplica);
    printf("\nDigite o valor do juros: ");
    scanf("%lf",&juros); 

    while(divida>aplica){ 
        
        printf("\nMês %d: Aplicacao = R$ %.2lf mensal, Divida = %.2lf ",meses,aplica, divida, divida > 0? divida : 0);
        aplica*=(1+(4.00/100));//rendimento dos 4%
        divida*=(1+(juros/100)); // valor sobre a divida
        divida-=aplica; // like this.
        meses++;
    
    }
    
    printf("\nMês %d: Aplicacao = R$ %.2lf mensal, Divida = %.2lf ",meses,aplica, divida);
    printf("\nSão necessarios %d meses para o pagamento do divida",meses);

    while (getchar()!= '\n');
    
    printf("\n\nDeseja fazer outra analise?(S/N): ");
    ops = getchar();
    
     while (getchar()!= '\n');

    }

    return 0;

}