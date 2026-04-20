#ifndef PUNTO_HPP
#define PUNTO_HPP

#include <cmath>

class Punto {
private:
    double x, y;

public:
    // Constructor por omisión
    Punto();

    // Constructor con parámetros
    Punto(double x, double y);

    // Métodos para obtener las coordenadas
    double getX() const;
    double getY() const;

    // Método para establecer coordenadas
    void set(double nx, double ny);

    // Método para calcular la distancia entre dos puntos
    double distanceTo(const Punto& other) const;
};

#endif // PUNTO_HPP
