#include "Saludo.h"
#include <iostream>
#include <chrono>
#include <ctime>
#include <sstream>

Saludo::Saludo(const std::string& autor) : autor(autor) {}

std::string Saludo::generarSaludo() const {
    std::ostringstream saludo;
    saludo << "Hola Mundo. Saludo de <" << autor << "> hoy <" << obtenerFechaActual() << "> .";
    return saludo.str();
}

std::string Saludo::obtenerFechaActual() const {
    auto now = std::chrono::system_clock::now();
    std::time_t tiempoActual = std::chrono::system_clock::to_time_t(now);

    char buffer[100];
    std::strftime(buffer, sizeof(buffer), "%d de %B de %Y", std::localtime(&tiempoActual));
    return std::string(buffer);
}
