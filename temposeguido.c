#include <stdio.h>

void verificahoras(int hora1, int hora2) {
	
    if ((hora1 == 0 && hora2 == 0) || hora1 == hora2) {
        printf("Ciclo de 24 horas fechado\n");
    } else {
        printf("Ainda não completou um ciclo de 24 horas\n");
    }
}

int main() {
    int hora_inicial, hora_final, hora_passada, horaAtual;

    hora_passada = 0;

    printf("Horário inicial: ");
    scanf("%d", &hora_inicial);

    printf("Horário final: ");
    scanf("%d", &hora_final);

    verificahoras(hora_inicial, hora_final);

    if (hora_final > hora_inicial) {

        printf("Diferença: %d\n", hora_final - hora_inicial);

    } else if (hora_final < hora_inicial) {
        horaAtual = hora_inicial;
        while (horaAtual % 24 != hora_final) {
            hora_passada++;
            horaAtual++;
        }

        printf("Horas passadas: %d\n", hora_passada);
		
    }

    return 0;
}
