#include<stdio.h>

int main(){

    int numFunc, valorhora,time;
    float salario;

    printf("\nDigite o numero do funcionario: ");
    scanf("%d",&numFunc);
    printf("\nValor da hora trabalhada: ");
    scanf("%d",&valorhora);
    printf("\nTempo trabalhado: ");
    scanf("%d",&time);

    salario = valorhora*time;
    printf("\nFunc. num. %d || salario = R$ %.2f ||",numFunc, salario);

    return 0;
}