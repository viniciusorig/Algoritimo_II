#media aritimetica

n = int(input("Quantidade de numeros para a media: "))
notatotal = 0

for i in range(0, n):
    notatotal += float(input("Digite o valor: "))
notafinal = notatotal/n
print(notafinal)