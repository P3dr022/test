#include<stdio.h>

int main(){

    double salario, venda;
    char nomefunc[10];

    printf("\nDigite o nome: ");
    scanf("%c",&nomefunc);
    printf("\nValor do salario: ");
    scanf("%lf",&salario);
    printf("\nValor da venda: ");
    scanf("%lf",&venda);

    venda *= (15.00/100);
    salario += venda;

    printf("\n Nome: %s || Salario bruto: R$ %.2f |",nomefunc, salario);

    return 0;

}