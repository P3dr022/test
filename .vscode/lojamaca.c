#include <stdio.h>
#include <math.h>


int main (){

    int Unidmaçã;
    float totalProd, valorProd;

    printf("\nEntre com o unid de maçãs:  ");
    scanf("%d", &Unidmaçã);

    if (Unidmaçã <= 0){
        
        printf("\nNumero invalido! Digite um numero positivo.");

    } else if(Unidmaçã <= 12){

        valorProd = 0.30;  
         
    } else{
        
        valorProd = 0.25;
    }
    
    totalProd = Unidmaçã * valorProd;
    printf("\nO subtotal da compra: %.2f ",totalProd);

    return 0;

}

