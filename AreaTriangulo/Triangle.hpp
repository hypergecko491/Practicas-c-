#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "Punto.hpp"

class Triangle {
private:
    Punto p1, p2, p3;

public:
    // Constructor por omisión
    Triangle();

    // Constructor con parámetros
    Triangle(const Punto& p1, const Punto& p2, const Punto& p3);

    // Método para calcular el perímetro
    double perimeter() const;

    // Método para calcular el área usando la fórmula de Herón
    double area() const;

    // Método para mostrar los vértices del triángulo
    void displayVertices() const;
};

#endif // TRIANGLE_HPP
