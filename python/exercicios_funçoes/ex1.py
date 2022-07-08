#Fibonacci com função
def serie(a, b, n, tam, cont):
    while cont < n :
        cont += 1
        print("Esse é o tamanho restante da serie: [%d]\n" %tam)
        tam -=1
        print(b)
        b = b+a
        a = b
a = 1
b = 1
n = int(input("Digite um tamanho para a serie de fibonacci: "))
tam = n
cont = 0
serie(a, b, n, tam, cont)