#include<stdio.h>
#include<math.h>

int main(){

    float A,B,C;
    double area_triagulo, area_raio, area_trapezio,area_quadrado,area_retangulo, pi = 3.14159;
    
    printf("\nEntre com valor de A B e C: ");
    scanf("%f %f %f",&A,&B,&C);

    area_triagulo = (A*C)/2;
    area_raio = pi * C * C;
    area_trapezio = ((A+B)*C)/2;
    area_quadrado = B * B;
    area_retangulo = A * B;

    printf("\nArea do triagulo é %.3lf ",area_triagulo);
    printf("\nArea do raio é %.3lf ",area_raio);
    printf("\nArea do trapezio é %.3lf",area_trapezio);
    printf("\nArea do quadrado é %.3lf ",area_quadrado);
    printf("\nArea do retangulo é %.3lf ",area_retangulo);

    return 0;
}
