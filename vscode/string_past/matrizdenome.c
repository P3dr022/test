#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*A condição dentro das aspas de leitura [^\n] é usado para definir que os elementos da
do vertor ou string acabaram no memento em que o usuario pressionou Enter.
*/
int main(){

    char matrizNome[5][25];
    int i;

    for(i=0;i<5;i++){
    printf("Digite os nomes na posicao %d: ",i+1);
    scanf("%24s[^\n]",matrizNome[i]); 
    }

    for(i=0;i<5;i++){
        printf("\nNome na posicao %d: %s",i, matrizNome[i]);
    }
    printf("\n");

    return 0;
}