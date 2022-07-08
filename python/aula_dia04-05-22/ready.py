#leitura de arquivo txt
arquivo = open("notas.txt", "w+")

p1 = 0; p2 = 0; p3 = 0; t1 = 0; t2 = 0; mediaf = 0
lista_notas = []
lista_texto = []
for k in range(0,2):
    p1 = float(input("digite a nota da 1º prova do aluno %d: " %k))
    p2 = float(input("digite a nota da 2º prova do aluno %d: " %k))
    t1 = float(input("digite a nota do 1º trabalho do aluno %d: " %k))
    t2 = float(input("digite a nota do 2º trabalho do aluno %d: " %k))
    lista_notas.append(p1)
    lista_notas.append(p2)
    lista_notas.append(t1)
    lista_notas.append(t2)
    for i in range(0, len(lista_notas)):
        lista_texto = str(lista_notas)
    arquivo.write("notas do aluno %d: \n" %k)
    arquivo.writelines(lista_texto)
    mediaf = str((((p1+p2)/2)*0.7)+(((t1+t2)/2)*0.3))
    arquivo.write("\nMedia Final do aluno: %s\n" %mediaf)
    arquivo.write("-----------------------------------------------------------\n\n")
arquivo.write("Arquivo Salvo com sucesso!!")
arquivo.close()