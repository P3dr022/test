#include <stdio.h>

// Função do Chatgpt

// Função para trocar dois elementos
void trocar(int* a, int* b) {          
    int temp = *a;
    *a = *b;
    *b = temp;  
}

// Função para particionar o array
int particionar(int array[], int baixo, int alto) {
    int pivo = array[alto];  // Escolhe o último elemento como pivô
    int i = (baixo - 1);     // Índice do menor elemento

    for (int j = baixo; j <= alto - 1; j++) {
        if (array[j] < pivo) {
            i++;             // Incrementa o índice do menor elemento
            trocar(&array[i], &array[j]);
        }
    }
    trocar(&array[i + 1], &array[alto]);
    return (i + 1);
}

// Função recursiva do Quick Sort
void quickSort(int array[], int baixo, int alto) {
    if (baixo < alto) {
        int pi = particionar(array, baixo, alto);  // Índice do pivô
        quickSort(array, baixo, pi - 1);  // Ordena os elementos antes do pivô
        quickSort(array, pi + 1, alto);   // Ordena os elementos após o pivô
    }
}

// Função para imprimir o array
void imprimirArray(int array[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {10, 80, 30, 90, 40, 50, 70};
    int tamanho = sizeof(array) / sizeof(array[0]);
    
    printf("Array original:\n");
    imprimirArray(array, tamanho);

    quickSort(array, 0, tamanho - 1);

    printf("Array ordenado:\n");
    imprimirArray(array, tamanho);
    
    return 0;
}
