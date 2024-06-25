#include <stdio.h>

int main(){

    int qntseg1, qntseg2, hora1, hora2, qntmin1, qntmin2, temposeg1, temposeg2, result, qntseg3, hora3, qntmin3;
    
    printf("Digite a hora 1:  ");
    scanf("%d",&hora1);
    printf("Digite os min 1:  ");
    scanf("%d",&qntmin1);
    printf("Digite os seg 1:  ");
    scanf("%d",&qntseg1);

    printf("Digite a hora 2:  ");
    scanf("%d",&hora2);
    printf("Digite os min 2:  ");
    scanf("%d",&qntmin2);
    printf("Digite os seg 2:  ");
    scanf("%d",&qntseg2);


    temposeg1 = (hora1*3600) + (qntmin1 * 60) + qntseg1;
    temposeg2 = (hora2*3600) + (qntmin2 * 60) + qntseg2;
    result = temposeg1 - temposeg2;

    hora3 = result/3600;
    qntmin3 = (result % 3600) / 60;
    qntseg3 = result % 60;
     
    printf("As horas subtraidas são %d:%d:%d",hora3,qntmin3,qntseg3);


    return 0;
}