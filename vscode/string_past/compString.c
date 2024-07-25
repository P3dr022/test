#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* O que retorna a função strcmp?:)
  (0)-> Quando a str1 e str2 ou string são iguais
  (-1) Quando a str1 for menor que str2
  (1) Quando o str1 for maior que str2
*/

/*Para conseguir copiar uma string para outra e necessario usar
o comando strcpy assim como no código a baixo. 
ex. strcpy(var2(variavel que ira ser trocada), var1(variavel a ser implementada));
*/

int main(){
    char palavra1[50] = {"abacate"};
    char palavra2[50] = {"bom dia"};

    printf("\nANTES: \n|| Palavra 1: %s ||\n|| Palavra 2: %s ||\n",palavra1,palavra2);

    strcpy(palavra2,palavra1); /* Se deixar a função em comt ou apaga do código ele retorna o valor da comparação
                                normal, mas se eu deixar func o strcmp pega o resultado do strcpy*/
    
    printf("\nDEPOIS: \n|| Palavra 1: %s ||\n|| Palavra 2: %s ||\n",palavra1,palavra2);
    printf("\nRusultado retornado: %d \n",strcmp(palavra1,palavra2));


    return 0;
}