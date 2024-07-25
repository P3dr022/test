#include <stdio.h>
#include <string.h>

int main() {
    // Define uma string
    char texto[] = "Olá, Mundo!";

    // Imprime a string original
    printf("Texto original: %s\n", texto);

    // Converte a string para maiúsculas
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] >= 'a' && texto[i] <= 'z') {
            texto[i] = texto[i] - 32;
        }
    }
    printf("Texto em maiúsculas: %s\n", texto);

    // Redefine a string para o original
    strcpy(texto, "Olá, Mundo!");

    // Converte a string para minúsculas
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] >= 'A' && texto[i] <= 'Z') {
            texto[i] = texto[i] + 32;
        }
    }
    printf("Texto em minúsculas: %s\n", texto);

    return 0;
}
