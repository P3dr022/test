#include <stdio.h>

void trocarValores(int *a, int *b) {
    int temp; 
    printf("\nDigite o valor de x: ");
    scanf("%d",&*a);

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x,y;

    printf("Antes: x = %d, y = %d\n", x, y);

    trocarValores(&x, &y);

    printf("Depois: x = %d, y = %d\n", x, y);

    return 0;
}