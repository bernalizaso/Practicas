let genero = prompt("ingresa si sis M o F");
let edad = prompt("ingresa tu edad");

if((genero==="F")&&(edad>=18)){
    alert("podes pasar y el precio es gratarola");
}
else if((genero==="M")&&(edad>=18)){
    alert("podes pasar pero esta 2 gambas");

}
else{
    alert("no podes pasar");
}