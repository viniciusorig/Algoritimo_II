#media com func

def media(n, mediaf, soma):
    for i in range(0,n):
        soma += float(input("Digite a nota %d: " %i))
    mediaf = soma/n
    print(mediaf)
n = int(input("Quantidade de notas para a media: "))
mediaf = 0
soma = 0

media(n, mediaf, soma)