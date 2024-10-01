//4- Escreva um programa que imprima um vetor de inteiros na ordem inversa endereçando os  elementos com um ponteiro.  
#include <stdio.h>

int main() {
    int vetor[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int *ptr = vetor + tamanho - 1; // Ponteiro para o último elemento

    printf("Vetor na ordem inversa:\n");
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%d ", *ptr);
        ptr--;
    }
    printf("\n");

    return 0;
}