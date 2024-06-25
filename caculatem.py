# Função para calcular o tempo inicial baseado no tempo final
def calcular_tempo_inicial(tempo_final, tempo_inicial):
    if tempo_final == 0 or tempo_final == tempo_inicial:
        tempo_inicial = 0
    else:
        tempo_inicial = (24 - tempo_final) % 24
    return tempo_inicial

def main():
    # Solicita a entrada do tempo final
    tempo_final = int(input("Digite o tempo final (entre 0 e 23): "))

    # Solicita a entrada do tempo inicial
    tempo_inicial = int(input("Digite o tempo inicial (entre 0 e 23): "))

    # Calcula o tempo inicial baseado no tempo final
    tempo_inicial = calcular_tempo_inicial(tempo_final, tempo_inicial)

    # Exibe o tempo inicial
    print("Tempo inicial:", tempo_inicial)

if __name__ == "__main__":
    main()
