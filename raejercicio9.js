let carritoDeCompras = {
    "Leche": 1.20,
    "Pan": 0.80,
    "Huevos": 2.50,
    "Queso": 3.00
};

for (let producto in carritoDeCompras) {
    console.log(`Producto: ${producto}, Precio: $${carritoDeCompras[producto].toFixed(2)}`);
}