/*6- Faça um programa que leia uma quantidade qualquer de números armazenando-os na memória e  
pare a leitura quando o usuário entrar com um número negativo. Em seguida, imprima o vetor lido.  
Use a função REALLOC.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros = NULL; // Ponteiro para o vetor de números
    int tamanho = 0, i = 0, numero;

    while (1) {
        printf("Digite um número (negativo para parar): ");
        scanf("%d", &numero);

        if (numero < 0) {
            break; // Sai do loop se o número for negativo
        }

        // Realocar memória para o vetor
        numeros = (int *)realloc(numeros, (tamanho + 1) * sizeof(int));
        if (numeros == NULL) {
            printf("Erro ao alocar memória.\n");
            exit(1);
        }

        // Armazenar o número no vetor
        numeros[tamanho] = numero;
        tamanho++;
    }

    // Imprimir os números
    printf("Números digitados:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Liberar a memória alocada
    free(numeros);

    return 0;
}