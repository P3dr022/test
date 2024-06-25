#include<stdio.h>

int main(){

    float nota,media,soma = 0;
    int i;

    for(i = 0;i < 4;i++){
        printf("\nDigite sua nota %d: ",i+1);
        scanf("%f",&nota);
        soma+=nota;
    } 
    media = soma/4;
    printf("\nA media é %.1f",media);
    return 0;
}