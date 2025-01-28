#ifndef SALUDO_H
#define SALUDO_H

#include <string>

class Saludo {
public:
    Saludo(const std::string& autor);
    std::string generarSaludo() const;

private:
    std::string autor;
    std::string obtenerFechaActual() const;
};

#endif // SALUDO_H
