"""
1) Realizar un procedimiento que cargue caracteres (no más de 50) desde el teclado en un
arreglo. El fin de la carga se detecta por el ingreso de un carácter “*”. 
"""
lista=[]
lista.append(input("agrega un caracter:"))

while len(lista) < 5 and lista[-1]!="*":
    lista.append(input("agrega un caracter:"))
print(lista)
    


    