#Fibonacci com armazenato em listas e um grafico com o matplotlib salvando em aquivo listas
arquivo = open("teste_fibonacci.txt", "a")
import matplotlib.pyplot as plt
def serie(a, b, n, tam, count):
    lista_nova = []
    lista_texto = []
    lista_count = []
    lista_count_texto = []
    while count < n :
        lista_nova.append(b)
        lista_count.append(count)
        tam -=1
        b = b+a
        a = b
        count += 1
    print(lista_nova)
    print(lista_count)
    arquivo.write("Lista dos valores da serie de fibonacci:\n")
    for i in range(0, len(lista_nova)):
        lista_texto = str(lista_nova)
    arquivo.writelines(lista_texto)
    #arquivo.writelines(lista_nova)
    arquivo.write("\nTermo equivalente da Serie:\n")
    for i in range(0, len(lista_count)):
        lista_count_texto = str(lista_count)
    arquivo.writelines(lista_count_texto)
    arquivo.write("\n")
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
arquivo.close()