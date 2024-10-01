#include<stdio.h>
#include<string.h>
#define TF 3

void leitura(float matriz[TF][TF], char *linha[],char * colunas[]){
    for(int i = 0; i < TF; i++){
        for(int j = 0; j < TF; j++){
            printf("\nEntre com as notas de %s na %s: ",linha[i], colunas[j]);
            scanf("%f", &matriz[i][j]);
        }
    }
}

void exibe(float matriz[TF][TF], char* linha[], char* colunas[]){
    printf("           ");
    for(int j = 0; j < TF; j++){
        printf("%-6s", colunas[j]);
    }
    printf("\n");

    for(int i = 0; i < TF; i++){
        printf("%-10s", linha[i]);
        for(int j = 0; j < TF; j++){
            printf(" %.2f ", matriz[i][j]);
        }
        printf("\n");
    } 
}

void calculanota(float matriz[TF][TF], char* linha[], char* colunas[], float somalinha[TF]){
    int i;
    
    for(int i = 0; i < TF; i++){
        somalinha[i] = 0;
        for(int j = 0; j < TF; j++){
            somalinha[i] += matriz[i][j];

        }
    }
    printf("\nSoma das notas dos alunos:\n");
    for(int i = 0; i < TF; i++){
        printf("%s: %.2f\n", linha[i], somalinha[i]/3);
    }

   float media = 0;
   for(int i = 0;i <TF;i++){
    media += somalinha[i];
   }
    media /=3;
/*
    printf("\nNotas menores que a media: ");
    for(i = 0;i < TF; i++){
        for(int j=0; j<TF;j++){
            if(matriz[i][j]<media){
                printf("\n Aluno %s reprovado com media: %.2f ", linha[i],media);
            }
        }
    }

    printf("\nNotas maiores que a média: ");
    for(i = 0;i < TF; i++){
        for(int j=0; j<TF;j++){
            if(media>=media){
                printf("\n Aluno %s aprovado com media: %.2f ", linha[i],media);
            }
        }
   }
    */
}

int main(){
    float matriz[TF][TF];
    int opc = 0;
    
    char *linha[TF] = {"Pedro", "Thiago", "Thauan"};
    char *colunas[TF] = {"AV1", "AV2", "AV3"};
    float somalinha[TF];

    while(opc != 4){
        printf("\nMenu: ");
        printf("\n1 - Leitura");
        printf("\n2 - Exibe");
        printf("\n3 - Calcula Nota");
        printf("\n4 - Sair");
        printf("\n\nOpção?: "); 
        scanf("%d", &opc);

        switch(opc){
            case 1:
                leitura(matriz, linha, colunas);
                break;
            case 2: 
                exibe(matriz, linha, colunas);
                break;
            case 3: 
                calculanota(matriz, linha, colunas, somalinha);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    }   
    return 0;
}
