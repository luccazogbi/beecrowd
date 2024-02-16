primeiro_numero = 1
segundo_numero = 3

print(f'A divisão do primeiro numero pelo segundo é: {primeiro_numero/segundo_numero:.2f}')
print(f'A divisão do primeiro numero pelo segundo é: %.2f' % (primeiro_numero/segundo_numero))

# Strings formatadas (também chamadas f-strings, para abreviar) permitem que se inclua o valor de variáveis Python dentro de uma string, desde que essas strings sejam prefixadas com f ou F e se escreva as expressões na forma {expression}.

# O operador '.2f' serve para controlar as casas decimais, ou seja, após a vírgula, que no caso do Python é um ponto '.' e não vírgula, você terá dois números. No código acima, nós temos dois exemplos de como nós podemos utilizar esse operador.