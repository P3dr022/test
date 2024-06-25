#include <stdio.h>

int main() {
    int a, b, c;

    // Pedir ao usuário para inserir os três valores inteiros
    printf("Digite três valores inteiros diferentes: ");
    scanf("%d %d %d", &a, &b, &c);

    // Verificar e trocar os valores para garantir que estejam em ordem crescente
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    // Imprimir os valores em ordem crescente
    printf("Os valores em ordem crescente são: %d %d %d\n", a, b, c);

    return 0;
}
