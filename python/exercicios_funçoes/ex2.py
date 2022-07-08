#Convesão de Celsius para fahrenheit

def convert(fahrenheit, celsius):
    fahrenheit = ((9*celsius)/5)+32
    print ("%.1f ºC" %celsius)
    print ("%.1f ºF" %fahrenheit)

celsius = float(input("Digite quantos graus em Celsius: "))
fahrenheit = 0
convert(fahrenheit, celsius)