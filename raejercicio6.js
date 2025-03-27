let numeros = [10, 20, 30, 40, 50];

let suma = 0;
let contador = 0;

while (contador < numeros.length) {
    suma += numeros[contador]; 
    contador++; 
}

let promedio = suma / numeros.length;

console.log(`El promedio de los números en el array es: ${promedio}`);