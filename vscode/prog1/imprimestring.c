#include <stdio.h>

void estatisticaString(char str[]) {
  int i, vogais = 0, consoantes = 0, outros = 0;
  for (i = 0; str[i] != '\0' && i < 50; i++) {
    char ch = str[i];
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
      vogais++;
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
      consoantes++;
    }
    else {
      outros++;
    }
  }
  printf("Estatísticas da string:\n");
  printf("Vogais: %d\n", vogais);
  printf("Consoantes: %d\n", consoantes);
  printf("Outros caracteres: %d\n", outros);
}

int main() {
  char str[51];

  printf("Digite uma string (máximo 50 caracteres): ");
  fgets(str, sizeof(str), stdin);

  estatisticaString(str);

  return 0;
}
