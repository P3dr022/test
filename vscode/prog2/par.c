#include <stdio.h>
#define LINHAS 3
#define COLUNAS 3

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, j;
    long long produto;

    printf("Digite os elementos da matriz %dx%d:\n", LINHAS, COLUNAS);
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < LINHAS; i++) {
        produto = 1; // Inicializa o produto como 1 para cada linha
        for (j = 0; j < COLUNAS; j++) {
            produto *= matriz[i][j];
        }
        printf("Produto dos elementos da linha %d: %lld\n", i, produto);
    }

    return 0;
}