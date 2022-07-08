#teste try
a = 5
b = 0
c = 0
print("a = %d" %a)
print("b = %d" %b)

try:
    c = a/b
except ZeroDivisionError:
    print ("Alterando os valores de b")
    b = 1
    c = a/b
    print (b)