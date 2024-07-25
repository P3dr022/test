#include <stdio.h>
#include <math.h>

int main (){
    
   float A,B;
   double MEDIA;

   printf("Valor de num1:  \n");
   scanf("%f",&A);
   printf("Valor de num2:  \n");
   scanf("%f",&B);
   

   MEDIA = ((A*3.5) + (B*7.5))/11;

   printf("valor do MEDIA: %.5f",MEDIA);
 
    
    return 0;
}
