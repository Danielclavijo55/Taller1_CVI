#include <iostream>
#include "Saludo.h"

int main() {
    // Instancia de la clase Saludo con el autor
    Saludo saludo("DanielClavijo");

    // Generar y mostrar el saludo en la consola
    std::cout << saludo.generarSaludo() << std::endl;

    return 0;
}