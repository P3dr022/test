#include <stdio.h>

int main(){

    int hora, min, seg;

    printf("\nDigite o horario atual   :   :  ");
    scanf("%d %d %d",&hora,&min,&seg);

    printf("As horas digitadas sao %d:%d:%d",hora,min,seg);

    return 0;
}