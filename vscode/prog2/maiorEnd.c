#include <stdio.h>

int main() {
    int num1, num2;
    int *enderecoNum1, *enderecoNum2;

    printf("Digite o valor de num1: ");
    scanf("%d", &num1);
    printf("Digite o valor de num2: ");
    scanf("%d", &num2);

    enderecoNum1 = &num1;
    enderecoNum2 = &num2;

    if (enderecoNum1 > enderecoNum2) {
        printf("O maior endereço é o de num1: %p\n", enderecoNum1);
    } else {
        printf("O maior endereço é o de num2: %p\n", enderecoNum2);
    }

    return 0;
}