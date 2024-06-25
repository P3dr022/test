#include <stdio.h>
#include <math.h>

int main() {
    double aplicacao, taxaAplicacao, divida, taxaDivida;
    int meses = 0;

    printf("Digite o valor da aplicação inicial: ");
    scanf("%lf", &aplicacao);
    printf("Digite o valor da dívida: ");
    scanf("%lf", &divida);
    printf("Digite a taxa de juros da dívida (em %%): ");
    scanf("%lf", &taxaDivida);
    taxaDivida /= 100;

    while (aplicacao < divida){
        printf("Mês %d: Aplicação = %.2lf, Dívida = %.2lf\n", meses, aplicacao, divida,divida > 0 ? divida : 0);
        taxaAplicacao = 4.00/100; 
        aplicacao *= (1 + taxaAplicacao);
        divida *= (1 + taxaDivida);
        divida -=aplicacao;
        meses++;
        
    }

    printf("Mês %d: Aplicação = %.2lf, Dívida = %.2lf\n", meses, aplicacao, divida);
    printf("Serão necessários %d meses para que a aplicação seja suficiente para pagar a dívida.\n", meses);

    return 0;
}

