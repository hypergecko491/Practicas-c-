#include "Punto.hpp"

// Constructor por omisión
Punto::Punto() : x(0), y(0) {}

// Constructor con parámetros
Punto::Punto(double x, double y) : x(x), y(y) {}

// Métodos para obtener las coordenadas
double Punto::getX() const { return x; }
double Punto::getY() const { return y; }

// Método para establecer coordenadas
void Punto::set(double nx, double ny) {
    x = nx;
    y = ny;
}

// Método para calcular la distancia entre dos puntos
double Punto::distanceTo(const Punto& other) const {
    return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
}
