#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIAS 7
#define LETRAS 26

// Função para exibir a matriz completa
void exibir_matriz(int matriz[DIAS][LETRAS]) {
    printf("Matriz de frequências:\n");
    for (int i = 0; i < DIAS; i++) {
        for (int j = 0; j < LETRAS; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Função para exibir a frequência de uma letra em um determinado dia
void exibir_frequencia(int matriz[DIAS][LETRAS], int dia, char letra) {
    int indice_letra = letra - 'a';
    if (dia >= 0 && dia < DIAS && indice_letra >= 0 && indice_letra < LETRAS) {
        printf("Frequência da letra '%c' no dia %d: %d\n", letra, dia + 1, matriz[dia][indice_letra]);
    } else {
        printf("Dia ou letra inválidos!\n");
    }
}

int main() {
    int matriz[DIAS][LETRAS];

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Preenche a matriz com valores aleatórios entre 0 e 1000
    for (int i = 0; i < DIAS; i++) {
        for (int j = 0; j < LETRAS; j++) {
            matriz[i][j] = rand() % 1001;
        }
    }

    int escolha, dia;
    char letra;

    while (escolha!=3) {
        printf("Menu:\n");
        printf("1. Exibir a matriz completa\n");
        printf("2. Exibir a frequência de uma letra em um dia específico\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);
        switch (escolha) {
            case 1:
                exibir_matriz(matriz);
                break;
            case 2:
                printf("Digite o dia da semana (1-7): ");
                scanf("%d", &dia);
                printf("Digite a letra (a-z): ");
                scanf(" %c", &letra);
                exibir_frequencia(matriz, dia - 1, letra);
                break;
        }
    }

    return 0;
}
