/* 7- Crie um programa que declare uma estrutura (registro) para o cadastro de alunos.  
Deverão ser armazenados, para cada aluno: matrícula, sobrenome (apenas um) e ano do  nascimento.  
Ao início do programa, o usuário deverá informar o número de alunos que serão  armazenados.  
O programa deverá alocar dinamicamente a quantidade necessária de memória para  armazenar os registros dos alunos.  
O programa deverá pedir ao usuário que entre com as informações dos alunos.  
Ao final, mostrar os dados armazenados e liberar a memória alocada.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int matricula;
    char sobrenome[50];
    int anoNascimento;
} Aluno;

int main() {
    int numAlunos, i;
    Aluno *alunos;

    // Solicitar o número de alunos
    printf("Digite a quantidade de alunos que deseja cadastrar: ");
    scanf("%d", &numAlunos);

    // Verificar se a quantidade de alunos é válida
    if (numAlunos <= 0) {
        printf("Quantidade de alunos inválida.\n");
        return 1;
    }

    // Alocar memória dinamicamente para os alunos
    alunos = (Aluno *)malloc(numAlunos * sizeof(Aluno));
    if (alunos == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Ler as informações dos alunos
    for (i = 0; i < numAlunos; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);

        // Limpar o buffer antes de ler a string
        printf("Sobrenome: ");
        scanf(" %49s", alunos[i].sobrenome);  // Limitar para 49 caracteres
        printf("Ano de nascimento: ");
        scanf("%d", &alunos[i].anoNascimento);
    }

    // Imprimir os dados dos alunos
    printf("\nDados dos alunos:\n");
    for (i = 0; i < numAlunos; i++) {
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Sobrenome: %s\n", alunos[i].sobrenome);
        printf("Ano de nascimento: %d\n\n", alunos[i].anoNascimento);
    }

    // Liberar a memória alocada
    free(alunos);

    return 0;
}
