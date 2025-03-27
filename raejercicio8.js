let palabras = ["manzana", "banana", "naranja", "uva", "fresa"];

let palabraIngresada = prompt("Ingrese una fruta:");

if (palabras.includes(palabraIngresada)) {
    console.log(`La fruta "${palabraIngresada}" está en el array.`);
} else {
    console.log(`La fruta "${palabraIngresada}" no está en el array.`);
}