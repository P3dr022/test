/*5- Crie um programa que:  
(a) Aloque dinamicamente um array de 5 números inteiros;  
(b) Peça para o usuário digitar os 5 números no espaço alocado;  
(c) Mostre na tela os 5 números;  
(d) Libere a memória alocada. 

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor, i;

    // (a) Alocação dinâmica de um array de 5 números inteiros
    vetor = (int *)malloc(5 * sizeof(int));

    // Verifica se a alocação foi bem-sucedida
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // (b) Peça para o usuário digitar os 5 números
    printf("Digite 5 números:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    // (c) Mostre na tela os 5 números
    printf("Os números digitados são:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // (d) Libere a memória alocada
    free(vetor);

    return 0;
}