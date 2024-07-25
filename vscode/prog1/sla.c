#include <stdio.h>

int main() {
    int nota, qntalunos, contador = 0;

    printf("\nDigite o numero de alunos: ");
    scanf("%d", &qntalunos);

    while(contador < qntalunos){
        printf("Digite a nota do aluno %d: ", contador + 1);
        scanf("%d", &nota);

        if(nota >= 0 && nota <= 100){
            if(nota >= 60){
                printf("\nAluno %d Aprovado! Sua nota: %d\n", contador + 1, nota);
            }else if{
                printf("\nAluno %d Reprovado! Sua nota: %d\n", contador + 1, nota);
            }
        }else{
            printf("\nNumero invalido!\n");
        }

        contador++;
    }

    return 0;
}


