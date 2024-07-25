#include<stdio.h>

int main(){

    int qntseg, horas, min, segs;

    printf("\nEntre com o valor de segundos a ser convertido:  ");
    scanf("%d",&qntseg);

    horas = qntseg/3600;
    min = (qntseg % 3600) / 60;
    segs = qntseg % 60;

    printf("Tempo convertido %d:%d:%d",horas,min,segs);

}
