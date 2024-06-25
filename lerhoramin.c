#include <stdio.h>

int main(){

    int hora_inicio,hora_final,hora_atual,hora_passado,min_inicio,min_final,min_atual,min_passado,resto_hora, resto_min;

    printf("Digite a hora inicial:");
    scanf("%d:%d",&hora_inicio,&min_inicio);
    printf("Digite a hora final:");
    scanf("%d:%d",&hora_final,&min_final);

    hora_passado = hora_final - hora_inicio;
    min_passado = min_final - min_inicio;

    if(hora_passado>0){

        hora_passado +=24;
        min_passado +=60;

    }
    resto_hora = hora_passado%24;
    resto_min = min_passado%60;

    printf("Horas corridas de jogo: %d:%d",resto_hora,resto_min);

    return 0;
}