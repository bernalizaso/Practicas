"""6) Realizar un procedimiento / función (según corresponda) que obtenga el máximo número de
un arreglo de enteros dado. b) ¿Cómo cambiaría la solución si el arreglo estuviera ordenado?"""
dada = [1,3,25,26,5,2,7,1]
elementomayor = dada[0]
indice = 1
while indice<len(dada):
    if dada[indice] >= elementomayor:
        elementomayor= dada[indice]
        
    indice = indice+1   
print(elementomayor)