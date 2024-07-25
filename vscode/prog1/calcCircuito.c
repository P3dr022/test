#include<stdio.h>

void calcTensao(){
    int V,R,I;
    printf("Digite a resistencia e a corrente: ");
    scanf("%d %d",&R,&I);
    V = R*I;
    printf("A valor da tensao eh %d",V);
    
}
void calcResist(){
    int R,V,I;
    printf("Digite a tensao e a corrente: ");
    scanf("%d %d",&V,&I);
    R = V/I;
    printf("A valor da resistencia eh %d",R);
}
void calcCorrent(){
    int I,V,R;
    printf("Digite a resiste e a corrente: ");
    scanf("%d %d",&V,&R);
    I = V/R;
    printf("A valor da corrente eh %d",I);
}
void calcPotencia(){
    int P,V,I;
    printf("Digite a tensao e a corrente: ");
    scanf("%d %d",&V,&I);
    P = V*I;
    printf("A valor da potencia eh %d",P);
}

int main(){
    int opc = 0;
    while(opc!=5){
        printf("\n\n1 - Calcular Tensao.");
        printf("\n2 - Calcular Resistencia.");
        printf("\n3 - Calcular Corrente.");
        printf("\n4 - Calcular Potencia.");
        printf("\n5 - Sair.");
        printf("\nOpcao? "); scanf("%d",&opc);
        switch (opc){
        case 1:
            calcTensao();
            break;
        case 2: 
            calcResist();
            break;
        case 3: 
            calcCorrent();
            break;
        case 4: 
            calcPotencia();
            break;
        }
    }
}