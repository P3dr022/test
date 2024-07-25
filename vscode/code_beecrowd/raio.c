#include<stdio.h>
#include<math.h>

int main(){

 double pi = 3.14159, raio, VOLUME;

 printf("\nDigite o raio: ");   
 scanf("%lf",&raio);

VOLUME = (4.0/3)*pi*pow(raio,3);
printf("|\nVolume = %.3f |",VOLUME);

return 0;
}