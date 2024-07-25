#include <stdio.h>
#include <math.h>

int main (){// não compilando... ver problema

   double area, raio;
   double pi = 3.14159;

   printf("Leia a raio:  \n");
   scanf("%lf",&raio);

   area= pi * pow(raio,2);

   printf("\nA=%.5f",area);

    return 0;
}