#convert metro to centimetro

def convert(metro, centimetro):
    centimetro = metro*100
    print("quantidade de metro: %.1f m\n" %metro)
    print ("quantidade de centimetro: %d cm\n" %centimetro)

metro = float(input("Digite a quantidade para a conversão: "))
centimetro = 0
convert(metro, centimetro)