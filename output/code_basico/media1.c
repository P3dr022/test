#include <stdio.h>
#include <math.h>

int main (){
    
   double A, B, MEDIA;

   printf("Valor de num1:  \n");
   scanf("%lf",&A);
   printf("Valor de num2:  \n");
   scanf("%lf",&B);
   

   MEDIA = ((A*3.5) + (B*7.5))/11;

   printf("valor do MEDIA: %.5f",MEDIA);
 
    
    return 0;
}
