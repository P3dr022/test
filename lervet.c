#include <stdio.h>

void leitura(int vetX[10], int tlX) {
    int i;
    printf("\nQuantos elementos tera no vetor (max. 10): ");
    scanf("%d", &tlX);
    for (i = 0; i < tlX; i++) {
        printf("\nEntre com elemento do vetor da posicao %d: ", i);
        scanf("%d", &vetX[i]);
    }
}

void exibe(int vetX[], int tlX) {
    int i;
    for (i = 0; i < tlX; i++)
        printf("\nVetor[%d] = %d", i, vetX[i]);
}

int busca(int vetX[], int tlX, int numprocurado) {
    int i, posicao = -1;
    for (i = 0; i < tlX; i++) {
        if (vetX[i] == numprocurado)
            return i;
    }
    return posicao;
}

void interseccao(int vetA[], int tlA, int vetB[], int tlB, int vetC[], int tlC) {
    tlC = 0;
    int posicao, numprocurado, i;
    for (i = 0; i < tlA; i++) {
        numprocurado = vetA[i];
        posicao = busca(vetB, tlB, numprocurado);
        if (posicao != -1) {
            vetC[tlC] = numprocurado;
            tlC++;
        }
    }
    printf("\nExibe o vetor da interseccao (elementos comuns entre A e B)");
    exibe(vetC, tlC);
}

void diferenca(int vetA[], int tlA, int vetB[], int tlB, int vetC[], int tlC) {
    tlC = 0;
    for (int i = 0; i < tlA; i++) {
        int numprocurado = vetA[i];
        int posicao = busca(vetB, tlB, numprocurado);
        if (posicao == -1) {
            vetC[tlC] = numprocurado;
            tlC++;
        }
    }
    printf("\nExibe o vetor da diferenca (elementos em A que nao estao em B):");
    exibe(vetC, tlC);
}

void uniaosemrepetir(int vetA[], int tlA, int vetB[], int tlB, int vetC[], int tlC) {
    tlC = 0;
    int posicao, numprocurado, i;
    for (i = 0; i < tlA; i++) {
        numprocurado = vetA[i];
        posicao = busca(vetC, tlC, numprocurado);
        if (posicao == -1) {
            vetC[tlC] = numprocurado;
            tlC++;
        }
    }
    for (i = 0; i < tlB; i++) {
        numprocurado = vetB[i];
        posicao = busca(vetC, tlC, numprocurado);
        if (posicao == -1) {
            vetC[tlC] = numprocurado;
            tlC++;
        }
    }
    printf("\nExibe o vetor da Uniao sem repeticao (tudo dos vetores A e B sem repetir)");
    exibe(vetC, tlC);
}

int main() {
    int vetA[10], vetB[10], vetC[20];
    int tlA, tlB, tlC;
    int opcao = 0;
    int numprocurado, posicao;
    while (opcao != 9) {
        printf("\n\n1- Leitura do vetor A e do tlA");
        printf("\n2- Leitura do vetor B e do tlB");
        printf("\n3- Exibe o vetor A e o tlA");
        printf("\n4- Exibe o vetor B e o tlB");
        printf("\n5- Ler um numero e verificar se esta no vetA");
        printf("\n6- Calcula e exibe a interseccao de A e B");
        printf("\n7- Calcula e exibe a diferenca A - B");
        printf("\n8- Calcula e exibe a uniao sem repeticao de A e B");
        printf("\n9- Sair");
        printf("\nOpcao? ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                leitura(vetA, tlA);
                break;
            case 2:
                leitura(vetB, tlB);
                break;
            case 3:
                exibe(vetA, tlA);
                break;
            case 4:
                exibe(vetB, tlB);
                break;
            case 5:
                printf("\nEntre com um numero a ser procurado no vetor: ");
                scanf("%d", &numprocurado);
                posicao = busca(vetA, tlA, numprocurado);
                if (posicao == -1)
                    printf("\nNumero nao existe dentro do vetor %d", numprocurado);
                else
                    printf("\nEncontrou o numero %d na posicao %d", numprocurado, posicao);
                break;
            case 6:
                interseccao(vetA, tlA, vetB, tlB, vetC, tlC);
                break;
            case 7:
                diferenca(vetA, tlA, vetB, tlB, vetC, tlC);
                break;
            case 8:
                uniaosemrepetir(vetA, tlA, vetB, tlB, vetC, tlC);
                break;
        }
    }
    return 0;
}