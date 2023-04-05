"""5) a) Realizar un procedimiento / función (según corresponda) que inserte un caracter en un
arreglo ordenado alfabéticamente, conservando el orden. b) Idem a para borrar un caracter. """
lista=["a","d","v"]
a = str(input("agregate un numero papi:"))
pos = 0
while  pos<len(lista) and lista[pos]<a:
    pos = pos+1

primer_lista = lista[:pos]
segunda_lista = lista[pos::]
#segunda_lista = lista[pos:len(lista)]
primer_lista.append(a)
lista= primer_lista + segunda_lista

print(lista)
