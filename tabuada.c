#include <stdio.h>

int main(){

    int num,i;
    char opc = 's';

    while (opc=='s'||opc=='S'){
    printf("Digite o numero da tabuada: \n");
    scanf("%d",&num);

    for(i=0;i<=10;i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }
    while (getchar() != '\n');
    
    printf("Deseja continuar?S/N: ");
    opc = getchar();

    while (getchar()!='\n');
    
    
    }
    
    return 0;
}