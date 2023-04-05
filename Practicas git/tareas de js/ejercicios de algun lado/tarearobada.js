/* algoritmo con introduccio nde 2 numeros, sacando por pantalla cual es el mayor

let num1 = parseInt(prompt("ingresa un numero)"));
let num2 = parseInt(prompt("ingresa un numero)"));

if (num1 > num2) {
    alert("el numero mayor es " + num1);
}
else if(num1 < num2){
    alert("el numero mayor es " + num2);
}
else if(num1 === num2){
    alert("es el mismo numero ");
}
*/

/* programa que lee 3 notas e indica, mediante la media, si el alumno esta aprobado o desaprobado, siendo que aprobado es con nota mayor o igual a 5

let num1 = parseInt(prompt("ingresa la nota 1"));
let num2 = parseInt(prompt("ingresa la nota 2"));
let num3 = parseInt(prompt("ingresa la nota 3"));

let notapromedio = (num1+num2+num3)/3;

if((notapromedio <5) || (num1<=4) ||  (num2<=4) || (num3<=4)){
    alert("el alumno esta desaprobado")
}
else{
    alert("el alumno esta aprobado")
};  */

/*Realizar un programa para una tienda de coches: Si el coche a la venta es un ford fiesta, el descuento es de un 5%. Si el coche a la venta es un ford 
focus, el descuento es del 10%. El usuario introduce el artículo (o su código) y el programa saca el descuento correspondiente por pantalla.

let marca = prompt("ingresa la marca del auto");
let modelo = prompt("ingresa el modelo");

if (marca == "ford")
  if (modelo == "fiesta") {
    alert("el modelo tiene 5% de descuen3");
  } else if (modelo == "focus") {
    alert("el modelo tiene 10% de descuento");
  }
  else {
    alert("consulta nuestros modelos en descuento");

} else {
  alert("consulta nuestas marcas en descuento");
} */

/*Realizar programa con la introducción de la edad
 por parte del usuario. NO PERMITIR EDADES MENORES QUE 1 AÑO NI MAYORES QUE 120 años. La computadora indica que: "Sí tiene permiso de acceso" si la edad es mayor que 18 años.*/

