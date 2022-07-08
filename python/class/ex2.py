#tentativa de colocar uma função dentro de uma classdeiro essa 
#resultado do teste é verdadeiro essa afirmaação
class User:
    name  = "vinicius"
    age = 20
    def prints():    
        print("nome do usuario: "+ User.name)
        print("idade do usuario: ", end='')
        print(User.age)
        print ("Idade do usuario em binario: ", end='')
        print(bin(User.age))
user = User

user.prints()