#include<stdio.h>

int main(){
    int codnum, numpeca;
    float subtotal, valorUnit;

    printf("\nDigite o codigo do produto: ");
    scanf("%d",&codnum);
    printf("\nnumero de itens de produto: ");
    scanf("%d",&numpeca);
    printf("\nValor unitario do produto: ");
    scanf("%f",&valorUnit);

    subtotal = numpeca*valorUnit;
    printf("\n Cod. %d || Subtotal da compra: R$ %.2f |",codnum, subtotal);

    return 0;
}