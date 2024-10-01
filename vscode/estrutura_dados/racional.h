#include<stdio.h>

 typedef struct{
        int num, den; 
    }racional;

racional definir(int a, int b);
racional adicionar(racional q1,racional q2){}
racional subtrair(racional q1, racional q2){}
racional multiplicar(racional q1, racional q2){}
racional dividir(racional q1, racional q2){}
int equivalente(racional q1, racional q2){} 
 

racional definir(int a, int b){
    racional q;
    q.num = a;
    q.den = b;
    return(q);
}

racional adicionar(racional q1, racional q2){

}

racional subtrair(racional q1, racional q2){
    racional r; 
    r.num = (q1.num *q2.den) - (q2.num*q1.den);
    r.den = q1.den * q2.den;
    return(r);
}

racional multiplicar(racional q1, racional q2){
    racional r;
    r.num = q1.num + q2.den;
    r.den = q1.den + q2.den;
    return r; 
}
racional dividir(racional q1, racional q2){
}

int main(){
    int opc = 0;

    while(opc != 7){
printf("\n\n------Menu------");
printf("\n1 - Definir");
printf("\n2 - Adcionar");
printf("\n3 - Subtrair");
printf("\n4 - Multiplicar");
printf("\n5 - dividir");
printf("\n6 - verificação");
printf("\n7 - Sair");
printf("\nOpcão?"); scanf("%d",&opc);
        switch (opc)
        {
        case 1:
            
            break;
        case 2:
            
            break;
        case 3:
           
            break;
        case 4:
            
            break;
        case 5:
            
            break;
        case 6:
            
            break;
        case 7:
            break;
        
        
        }
    }
}
