#include <stdio.h>
#define MAX_ALUNOS 100

// Função para preencher um vetor com valores lidos do teclado
    for (int i = 0; i < tamanho; i++) {
void preencher_vetor(float vetor[], int tamanho, const char* nome_prova) {
        printf("Digite a nota do aluno %d na %s: ", i + 1, nome_prova);
        scanf("%f", &vetor[i]);
    }
}

// Função para imprimir um vetor
void imprimir_vetor(float vetor[], int tamanho, const char* nome_prova) {
    printf("\nNotas da %s:\n", nome_prova);
    for (int i = 0; i < tamanho; i++) {
        printf("Aluno %d: %.2f\n", i + 1, vetor[i]);
    }
}

// Função para imprimir a nota final de cada aluno
void imprimir_nota_final(float P1[], float P2[], float P3[], int tamanho) {
    printf("\nNotas finais:\n");
    for (int i = 0; i < tamanho; i++) {
        float nota_final = (P1[i] + P2[i] + 2 * P3[i]) / 4;
        printf("Aluno %d: %.2f\n", i + 1, nota_final);
    }
}

// Função para imprimir os índices cuja nota final é menor que 60
void imprimir_indices_reprovados(float P1[], float P2[], float P3[], int tamanho) {
    printf("\nAlunos com nota final menor que 60:\n");
    for (int i = 0; i < tamanho; i++) {
        float nota_final = (P1[i] + P2[i] + 2 * P3[i]) / 4;
        if (nota_final < 60) {
            printf("Aluno %d\n", i + 1);
        }
    }
}

// Função para retornar o número de notas finais maiores ou iguais a 60
int contar_notas_acima_60(float P1[], float P2[], float P3[], int tamanho) {
    int count = 0;
    for (int i = 0; i < tamanho; i++) {
        float nota_final = (P1[i] + P2[i] + 2 * P3[i]) / 4;
        if (nota_final >= 60) {
            count++;
        }
    }
    return count;
}

// Função principal
int main() {
    int tamanho;
    float P1[MAX_ALUNOS], P2[MAX_ALUNOS], P3[MAX_ALUNOS];
    int opcao = 0;

    printf("Digite o número de alunos (até %d): ", MAX_ALUNOS);
    scanf("%d", &tamanho);

    if (tamanho <= 0 || tamanho > MAX_ALUNOS) {
        printf("Número de alunos inválido.\n");
        return 1;
    }

    printf("\nPreenchendo notas da P1:\n");
    preencher_vetor(P1, tamanho, "P1");

    printf("\nPreenchendo notas da P2:\n");
    preencher_vetor(P2, tamanho, "P2");

    printf("\nPreenchendo notas da P3:\n");
    preencher_vetor(P3, tamanho, "P3");

    while (opcao != 7){
        printf("\nMenu:\n");
        printf("1. Imprimir notas da P1\n");
        printf("2. Imprimir notas da P2\n");
        printf("3. Imprimir notas da P3\n");
        printf("4. Imprimir nota final de cada aluno\n");
        printf("5. Imprimir índices de alunos com nota final < 60\n");
        printf("6. Contar notas finais >= 60\n");
        printf("7. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        switch (opcao){
            case 1:
                imprimir_vetor(P1, tamanho, "P1");
                break;
            case 2:
                imprimir_vetor(P2, tamanho, "P2");
                break;
            case 3:
                imprimir_vetor(P3, tamanho, "P3");
                break;
            case 4:
                imprimir_nota_final(P1, P2, P3, tamanho);
                break;
            case 5:
                imprimir_indices_reprovados(P1, P2, P3, tamanho);
                break;
            case 6:
                printf("Número de notas finais >= 60: %d\n", contar_notas_acima_60(P1, P2, P3, tamanho));
                break;
            case 7:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
