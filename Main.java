import java.util.Scanner;

public class Main {
    // Método para calcular o tempo inicial baseado no tempo final
    public static int calcularTempoInicial(int tempoFinal, int tempoInicial) {
        if (tempoFinal == 0 || tempoFinal == tempoInicial) {
            tempoInicial = 0;
        } else {
            tempoInicial = (24 - tempoFinal) % 24;
        }
        return tempoInicial;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Solicita a entrada do tempo final
        System.out.print("Digite o tempo final (entre 0 e 23): ");
        int tempoFinal = scanner.nextInt();

        // Solicita a entrada do tempo inicial
        System.out.print("Digite o tempo inicial (entre 0 e 23): ");
        int tempoInicial = scanner.nextInt();

        // Calcula o tempo inicial baseado no tempo final
        tempoInicial = calcularTempoInicial(tempoFinal, tempoInicial);

        // Exibe o tempo inicial
        System.out.println("Tempo inicial: " + tempoInicial);

        scanner.close();
    }
}

