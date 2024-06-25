#include <stdio.h>

int main() {
    double divida = 1000.0;  // Valor da dívida inicial
    double pagamentoMensal = 100.0;  // Valor do pagamento mensal
    int meses = 0;

    while (divida > 0) {
        divida -= pagamentoMensal;
        meses++;
        printf("Mês %d: Dívida restante: %.2f\n", meses, divida > 0 ? divida : 0);
    }

    printf("Dívida paga em %d meses.\n", meses);

    return 0;
}
