#sum 10 number
def sum (count,a):
    for i in range(1, count+1):
        a += float(input("Digite o %dº: " % i))
    print("Valor total %.1f " %a)

count = 10
a = 0 
sum(count, a)