let numeros = [12, 45, 7, 23, 89, 34];

let maximo = numeros[0];

for (let i = 1; i < numeros.length; i++) {
    if (numeros[i] > maximo) {
        maximo = numeros[i]; 
    }
}

console.log(`El número más grande en el array es: ${maximo}`);