cantidad_de_guitarra = float(input("pone cuanto billu va al plazo fijont:"))
interes_anual = float(0.04)
primer_año =  round (float(cantidad_de_guitarra + cantidad_de_guitarra * interes_anual),2)
segundo_año = round(float(primer_año + primer_año * interes_anual),2)
tercer_año = round(float(segundo_año + segundo_año * interes_anual),2)
print("la cantidad de guitarra tras el primer año es:", primer_año,
    "\nla cantidad de guitarra para el papa segundo es:", segundo_año,
    "\nla cantidad de tarasca finalisima es:", tercer_año)