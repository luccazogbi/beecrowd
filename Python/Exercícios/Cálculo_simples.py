# Entrada dos dados da primeira peça 

Codigo_P1 = int(float(input()))
Numero_de_P1 = int(float(input()))
Valor_unitario_P1 = float(input())

# Entrada dos dados da segunda peça 

Codigo_P2 = int(float(input()))
Numero_de_P2 = int(float(input()))
Valor_unitario_P2 = float(input())

#Cálculo dos preços

Valor_total = (Numero_de_P1 * Valor_unitario_P1) + (Numero_de_P2 * Valor_unitario_P2)
print(type(Codigo_P1))
# Saída de dados

print(f"VALOR A PAGAR: R$ {Valor_total: .2f}") 