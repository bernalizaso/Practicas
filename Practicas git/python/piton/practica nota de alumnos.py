print("programa de evaluacion de condicion de promocion de alumnos")
nota_alumno = float(input())
def promocion(nota):
    condicion = "promocionado"
    if 4<=nota<6:
        condicion = "aprobado"
    if nota<4:
        condicion = "desaprobado"
    return condicion
print(promocion(nota_alumno))
