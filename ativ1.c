#include <stdio.h>

int main() {
    int A, B, Soma, Subtracao, Multiplicacao, Divisao, Resto;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    Soma = A + B;
    Subtracao = A - B;
    Multiplicacao = A * B;
    Divisao = A / B;
    Resto = A % B;

    printf("A + B = %d\n", Soma);
    printf("A - B = %d\n", Subtracao);
    printf("A x B = %d\n", Multiplicacao);
    printf("A / B = %d\n", Divisao);
    printf("A %% B = %d\n", Resto);

    return 0;
}
