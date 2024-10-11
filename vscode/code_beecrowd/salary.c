#include<stdio.h>

int main(){
    int numfunc, numjob;
    float horajob;

    printf("Digite o numero de funcionario(a): ");
    scanf("%d",&numfunc);
    printf("horas trabalhadas: ");
    scanf("%d",&numjob);
    printf("Valor a receber por horas trabalhadas: ");
    scanf("%f",&horajob);

    horajob *= numjob;

    printf("NUMBER = %d\n",numfunc);
    printf("SALARY = %.2f\n",horajob);

    return 0; 
}