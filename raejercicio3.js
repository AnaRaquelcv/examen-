let contrasena = prompt("Por favor, ingresa una contraseña:");

function validarContrasena(contrasena) {
    if (contrasena.length < 8) {
        return false;
    }

    let contieneNumero = /\d/.test(contrasena);
    if (!contieneNumero) {
        return false;
    }

    return true;
}

if (validarContrasena(contrasena)) {
    console.log("La contraseña es válida.");
} else {
    console.log("La contraseña no es válida. Debe tener al menos 8 caracteres y contener al menos un número.");
}