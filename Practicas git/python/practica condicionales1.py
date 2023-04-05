"""Escribir un programa que almacene la cadena de caracteres contraseña en una variable, pregunte al usuario por la contraseña 
e imprima por pantalla si la contraseña introducida por el usuario coincide con la guardada en la variable sin tener en cuenta
 mayúsculas y minúsculas.
"""

contraseña= "123456"
con = input("escribe la contraseña:")
if contraseña == con:
        print("la contraseña es correcta")
else: 
        print("la contraseña es incorrecta")


