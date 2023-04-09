#include <iostream>
using namespace std;
/*Resolver y Realizar en c++
a. La suma de 45 + 34 mostrar x pantalla el resultado
b. La resta de 45 -40 mostrar le resultado x pantalla
c. La división de 46 y 3
d. Un programa que multiplique 65 * 3 con la salida en pantalla
2. Resolver usando Variables y operadores, mostrar el resultado x pantalla.
a. Calcula el volumen, de una habitación que tiene 5 m de largo, 4 m de ancho y
2.5 m de alto.
b. Escribe un programa en C++ que nos diga cuál es el volumen de un cono con
un radio de la base de 14,5 y una altura de 26,79. La fórmula que debes usar
es: (Pi x (radio)2 / altura) /3, recordar Pi=3.14.
c. ¿Modificar el programa anterior para que usen variables Dobles, que
diferencia nota? ¿Por qué?*/
  int main()
  {
    
cout << "^^^^^^EJERCICIO 1^^^^^^" << endl;
/* consigna A */
cout << "la suma de 45 + 34 es:" << 45 + 34 << endl;
/* Consigna B */
cout << "la resta de 45 - 40 es:" << 45 - 40 << endl;
/* Consigna C */
float numero_a, numero_b, cociente;
numero_a = 46;
numero_b = 3;
cociente = numero_a/numero_b ;
cout << "el resultado de dividir 46 entre 3 es: " << cociente << endl;
/* Consigna D */
int numero1, numero2, producto;
numero1 = 65;
numero2 = 3;
producto = numero1*numero2;
cout << "el producto de multiplicar 65 por 3 es: " << producto << endl;
cout << "^^^^^^EJERCICIO 1^^^^^^" << endl;
cout << "^^^^^^EJERCICIO 2^^^^^^" << endl;
/* ejercicio A, formula usada de volumen v = l * b * h*/
float l, b, h, volumenh;
l = 5;
b = 4;
h = 2.5;
volumenh = l*b*h;
cout << "el volumen de la habitacion es "<< volumenh <<" metros"<< endl; 
/*Ejercicio B, formula usada de volumen es (Pi x (radio)2 / altura) /3 donde Pi=3.14 */
float radio, altura, Pi, volumenc;
radio = 14.5;
altura= 26.79;
Pi = 3.14;
volumenc = (Pi * (radio*radio) / altura) /3;
cout << "el volumen del cono es "<< volumenc <<" metros"<< endl; 
/*ejercicio C*/
double radiod, alturad, Pid, volumend;
radiod = 14.5;
alturad= 26.79;
Pid = 3.14;
volumend = (Pid * (radiod*radiod) / alturad) /3;
cout << "el volumen del cono es "<< volumend <<" metros"<< endl; 

/*mas alla del peso del programa por usar variables dobles en lugar de float, (ya que las variables double ocupan 64bits y las float 32bits), no note otro cambio.
Es posible que se deba a que use variables float a lo largo de casi todo el ejercicio, haciendo que ya de por si use decimales. A la hora de compilar el programa
el numero de decimales fue el mismo usando float que usando double*/

cout << "^^^^^^EJERCICIO 2^^^^^^" << endl;


    return 0;
  }
  