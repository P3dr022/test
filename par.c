#include<stdio.h>
#include<stdbool.h>

int main(){

    // Quando uso uma variavel "vet" e coloco como (vet = 0) isso quer dizer que é false, e caso eu coloque como (vet = 1) seria true
    int num, i;
    char ops = 's';
    bool primo = true;

    while(ops == 's'||ops == 'S'){

        printf("\nDigite o numero: ");
        scanf("%d",&num);

        if(num <= 1){
            primo = false;
        }else{
            for ( i = 2; i <= num/2 ; i++){
            if(num % i == 0){
            primo = false;
            break;
            }
          }
        }

        if(primo){
            printf("\nO numero é primo!");
        }else{
            printf("\nO numero não é primo!");
        }

        while (getchar()!= '\n');
        
        printf("\nDeseja continuar?(S/N): ");
        ops = getchar();
    
        while (getchar()!= '\n');
        
    }
     return 0;
}