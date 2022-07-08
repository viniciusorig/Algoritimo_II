#lendo o arquivo da serie de fibonacci
arquivo = open(r"/home/vini/Documentos/Algoritimo_II/notas.txt", "r+")
linha = arquivo.readline()
for linha in arquivo:
    print(linha)
arquivo.close()