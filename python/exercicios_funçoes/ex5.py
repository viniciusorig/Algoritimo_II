#verificação de caracteres
def verificação(n):
    if 0 <= n <= 10:
        print("Digitou corretamente, parabens!!!!!")
    else:
        print("Incorrecto Digite algum numero INTEIRO entre 0 e 10")
        n = int(input("Digite algum numero: "))
        verificação(n)
p = int(input("Digite um numero para a vericação: "))
verificação(p)