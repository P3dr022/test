#include<stdio.h>
#define TF 100 // Parametro limite

void leitura(float vet[], int tam, const char*nome_prova){
    for(int i = 0;i < tam; i++){
        printf("\nEntre com nota %s aluno %d: ",nome_prova, i + 1);
        scanf("%f",&vet[i]);
    }
}

void exibe(int vet[], int tam, const char*nome_prova) {
    printf("\nNotas da %s ",nome_prova);
    for (int i = 0; i < tam; i++) {
        printf("\nAluno %d || Nota: %d", i + 1, vet[i]);
    }
}

void soma_nota(float v1[],float v2[],float v3[], int tam){
    for(int i=0;i<tam;i++){
        float nota = (v1[i] + v2[i] + (2 * v3[i]) / 4);
        printf("\nNota do aluno %d: %.2f ",i+i,nota);
    }
}

void imprime_notabaixa(float v1[], float v2[], float v3[], int tam){
    for(int i=0;i<tam;i++){
        printf("\nAlunos com nota < 60");
        float nota = (v1[i] + v2[i] + (2 * v3[i]) / 4);
        if(nota < 60){
            printf("\nAluno %d",i+1);
        }
    }
}

void imprime_aprov(float v1[], float v2[], float v3[], int tam[]){
    for(int i=0;i<tam;i++){
        int cont = 0;
        printf("\nAlunos aprovados:");
        float nota = (v1[i] + v2[i] + (2 * v3[i]) / 4);
        if(nota >= 60){
            cont++;
        }
    }
    return cont;
}

int main(){
int opc = 0;
float v1[TF],v2[TF],v3[TF];
int tam;
const char* nome_prova;

    printf("\nDigite o numero de alunos (Max.100): ");
    scanf("%d",&tam);

    printf("\nPreenchendo notas da P1:\n");
    leitura(v1, tam, "P1");
    printf("\nPreenchendo notas da P2:\n");
    leitura(v2, tam, "P2");
    printf("\nPreenchendo notas da P3:\n");
    leitura(v3, tam, "P3");

    while (opc!=7){
        printf("\nMenu:\n");
        printf("1. Imprimir notas da P1\n");
        printf("2. Imprimir notas da P2\n");
        printf("3. Imprimir notas da P3\n");
        printf("4. Imprimir nota final de cada aluno\n");
        printf("5. Imprimir índices de alunos com nota final < 60\n");
        printf("6. Contar notas finais >= 60\n");
        printf("7. Sair\n");
        printf("opção: ");
        scanf("%d", &opc);  
        switch (opc){
    case 1:
        leitura(v1,tam);
        break;
    case 2: 
        leitura(v2,tam);
        break;
    case 3: 
        leitura(v3,tam);
        break;
    case 4:
        soma_nota(v1,v2,v3,tam);
        break;
    case 5: 
        imprime_notabaixa(v1,v2,v3,tam);
        break;
    case 6: 

        }
    }

}