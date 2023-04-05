barras_de_pan_vencidas = float(input("cuantas barras de pan compraste que esten pasadas?:"))
precio_comun = round((3.49*barras_de_pan_vencidas),2)
precio_con_descuento= round((0.6*precio_comun),2)

print("el precio de la/s barra/s es de:", precio_comun)
print("el precio con descuento es de:", precio_con_descuento)