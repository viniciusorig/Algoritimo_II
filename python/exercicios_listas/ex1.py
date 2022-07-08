#Fibonacci com armazenato em listas
def serie(a, b, n, tam, count):
    lista_nova = []
    while count < n :
        lista_nova.append(b)
        print("Esse é o tamanho restante da serie: [%d]\n" %tam)
        tam -=1
        print(b)
        b = b+a
        a = b
        count += 1
    print(lista_nova)
a = 1
b = 1
n = int(input("Digite um tamanho para a serie de fibonacci: "))
tam = n
count = 0
serie(a, b, n, tam, count)