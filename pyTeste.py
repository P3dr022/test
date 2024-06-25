def calcular_meses_aplicacao_v1(divida, aplicacao, juros_aplicacao):
    meses = 0
    while aplicacao < divida:
        aplicacao += aplicacao * (juros_aplicacao / 100)
        meses += 1
    return meses

def calcular_meses_aplicacao_v2(divida, aplicacao, juros_aplicacao, juros_divida):
    meses = 0
    while aplicacao < divida:
        aplicacao += aplicacao * (juros_aplicacao / 100)
        divida += divida * (juros_divida / 100)
        meses += 1
    return meses

# Solicitar os valores do usuário
divida = float(input("Digite o valor da dívida inicial (R$): "))
aplicacao = float(input("Digite o valor da aplicação inicial (R$): "))
juros_aplicacao = float(input("Digite a taxa de juros da aplicação (% ao mês): "))
juros_divida = float(input("Digite a taxa de juros da dívida (% ao mês, digite 0 se não houver): "))

# Calcular o número de meses para os dois cenários
meses_v1 = calcular_meses_aplicacao_v1(divida, aplicacao, juros_aplicacao)
meses_v2 = calcular_meses_aplicacao_v2(divida, aplicacao, juros_aplicacao, juros_divida)

# Exibir os resultados
print(f"\nNúmero de meses necessários sem considerar juros da dívida: {meses_v1} meses.")
if juros_divida > 0:
    print(f"Número de meses necessários considerando juros da dívida: {meses_v2} meses.")
else:
    print("Os juros da dívida foram considerados como 0%.")

# Testando com os valores fornecidos:
# divida = 10000
# aplicacao = 1500
# juros_aplicacao = 4
# juros_divida = 2.5
