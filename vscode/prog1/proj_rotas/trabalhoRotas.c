#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

#define TF 5

int menorCusto = INT_MAX;
int melhorCaminho[TF];
int tamanhoMelhorCaminho = 0;

void leitura(int matriz[TF][TF]) {
    for (int i = 0; i < TF; i++) {  
        for (int j = 0; j < TF; j++) {
            printf("\nDigite os elementos de custo da posição %dx%d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void exibe(int matriz[TF][TF], char* regiao[], char* colunas[]) {
    printf("           ");
    for (int j = 0; j < TF; j++) {
        printf("%-13s", colunas[j]);
    }
    printf("\n");

    for (int i = 0; i < TF; i++) {
        printf("%-13s", regiao[i]);
        for (int j = 0; j < TF; j++) {
            printf("%-14d", matriz[i][j]);
        }
        printf("\n");
    }
}

void encontraRotasAux(int matriz[TF][TF], int origem, int destino, int visitado[], int vetAtual[], int vetprox, int custoAtual, char* regiao[]) {
    visitado[origem] = 1;
    vetAtual[vetprox] = origem;
    vetprox++;

    if (origem == destino) { // Se nó atual é o destino, então é imprimido o caminho.
        if (custoAtual < menorCusto) {
            menorCusto = custoAtual;
            tamanhoMelhorCaminho = vetprox;
            for (int i = 0; i < vetprox; i++) {
                melhorCaminho[i] = vetAtual[i];
            }
        }

        printf("Rota: ");
        for (int i = 0; i < vetprox; i++) {
            printf("%s", regiao[vetAtual[i]]);
            if (i < vetprox - 1) {
                printf(" -> "); 
            }
        }
        printf(" | Custo total: %d\n", custoAtual);
    } else {
        for (int i = 0; i < TF; i++) {
            if (!visitado[i] && matriz[origem][i] != 0) { //
                encontraRotasAux(matriz, i, destino, visitado, vetAtual, vetprox, custoAtual + matriz[origem][i], regiao); 
                // A função chama a si mesmo para poder percorrer novos caminhos.
            }
        }
    }

    vetprox--; // desfaz a adição do nó do caminho.
    visitado[origem] = 0; // desmarcar o nó atual como "visitado".
}

void encontraRota(int matriz[TF][TF], int origem, int destino, char* regiao[]) {
    int visitado[TF] = {0};
    int vetAtual[TF];
    int vetprox = 0;
    int custoAtual = 0;

    menorCusto = INT_MAX;
    printf("\nRotas possíveis entre %s e %s:\n", regiao[origem], regiao[destino]);
    encontraRotasAux(matriz, origem, destino, visitado, vetAtual, vetprox, custoAtual, regiao);

    if (menorCusto != INT_MAX) {
        printf("\nCaminho de melhor custo: ");
        for (int i = 0; i < tamanhoMelhorCaminho; i++) {
            printf("%s", regiao[melhorCaminho[i]]);
            if (i < tamanhoMelhorCaminho - 1) {
                printf(" -> ");
            }
        }
        printf(" | Custo total: %d\n", menorCusto);
    } else {
        printf("\nNenhuma rota encontrada entre %s e %s.\n", regiao[origem], regiao[destino]);
    }
}

void listaRotas(int matriz[TF][TF], char* regiao[]) {
    printf("\nLista de todas as rotas disponíveis e seus custos:\n");
    for (int i = 0; i < TF; i++) {
        for (int j = 0; j < TF; j++) {
            if (matriz[i][j] != 0) {
                printf("Rota de %s para %s: Custo = %d\n", regiao[i], regiao[j], matriz[i][j]);
            }
        }
    }
}

int main() {
    int matriz[TF][TF];
    int opc = 0;

    char* regiao[TF] = {"Norte", "Sul", "Nordeste", "Centro-Oeste", "Sudeste"};
    char* colunas[TF] = {"| Norte", "| Sul", "| Nordeste", "| Centro-Oeste", "| Sudeste"};
    int origem, destino;

    while (opc != 5) {
        printf("\n\nMenu: ");
        printf("\n1 - Leitura da matriz %dx%d", TF, TF);
        printf("\n2 - Tabela dos custos");
        printf("\n3 - Encontrar rota de menor custo");
        printf("\n4 - Listar todas as rotas");
        printf("\n5 - Sair");
        printf("\nOpção?: ");
        scanf("%d", &opc);
        switch (opc) {
            case 1:
                leitura(matriz);
                break;
            case 2:
                exibe(matriz, regiao, colunas);
                break;
            case 3:
                exibe(matriz,regiao,colunas)
                printf("\nDigite a origem (0-Norte, 1-Sul, 2-Nordeste, 3-Centro-Oeste, 4-Sudeste): ");
                scanf("%d", &origem);
                printf("Digite o destino (0-Norte, 1-Sul, 2-Nordeste, 3-Centro-Oeste, 4-Sudeste): ");
                scanf("%d", &destino);
                encontraRota(matriz, origem, destino, regiao);
                break;
            case 4:
                listaRotas(matriz, regiao);
                break;
        }
    }
    return 0;
}


