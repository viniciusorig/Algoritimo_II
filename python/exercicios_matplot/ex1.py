#Fibonacci com armazenato em listas e um grafico com o matplotlib
import matplotlib.pyplot as plt
def serie(a, b, n, tam, count):
    lista_nova = []
    lista_count = []
    while count < n :
        lista_nova.append(b)
        lista_count.append(count)
        tam -=1
        b = b+a
        a = b
        count += 1
    print(lista_nova)
    print(lista_count)
    plt.plot(lista_count, lista_nova)
    plt.title('Fibonacci com o aumento dos numeros')
    plt.xlabel('Termo Fibonacci')
    plt.ylabel('Valor correspomdente')
    
    plt.show()
a = 1
b = 1
n = int(input("Digite um tamanho para a serie de fibonacci: "))
tam = n
count = 0
serie(a, b, n, tam, count)

