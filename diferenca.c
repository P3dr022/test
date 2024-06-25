#include<stdio.h>

int main(){
    int a, b, c, d, result;

    printf("\nDigite os valores de A, B, C e D: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    result = (a*b)-(c*d);
    printf("\nO valor da diferença é %d",result);

    return 0;

}