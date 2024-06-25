#include <stdio.h>

int main(){

    int horaInicial, horaFinal, HoraAtual, horaPassada, minInicial, minFinal, minutoAtual, minPassado;
    horaPassada = 0;
    minPassado = 0;

    printf("Digite a hora incial:  ");
    scanf("%d %d", &horaInicial, &minInicial);
    HoraAtual = horaInicial;
    minutoAtual = minInicial;

    printf("Digite a hora final: ");
    scanf("%d %d", &horaFinal, &minFinal);

    if (horaFinal>horaInicial){

        printf("%d:%d", horaFinal-horaInicial&&minFinal-minInicial);

    }else if(horaFinal||minFinal){
        while (HoraAtual%24!=horaFinal){
            horaPassada++;
            HoraAtual++;
            

        }
        
    printf("Horas corridas de jogo: %d:%d",horaPassada,minPassado);
    }
    
}