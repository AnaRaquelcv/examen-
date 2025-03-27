let estaciones = ["Invierno", "Primavera", "Verano", "Otoño"];

let indice = parseInt(prompt("Ingrese un número del 0 al 3 para ver la estación correspondiente:"));

if (indice >= 0 && indice < estaciones.length) {
    console.log(`La estación correspondiente es: ${estaciones[indice]}`);
} else {
    console.log("Número inválido. Por favor, ingrese un número entre 0 y 3.");
    
}