#include "Triangle.hpp"
#include <iostream>
#include <cmath>

using namespace std;

// Constructor por omisión
Triangle::Triangle() : p1(0, 0), p2(50, 30), p3(25, 10) {}

// Constructor con parámetros
Triangle::Triangle(const Punto& p1, const Punto& p2, const Punto& p3)
    : p1(p1), p2(p2), p3(p3) {}

// Método para calcular el perímetro
double Triangle::perimeter() const {
    double d1 = p1.distanceTo(p2);
    double d2 = p2.distanceTo(p3);
    double d3 = p3.distanceTo(p1);
    return d1 + d2 + d3;
}

// Método para calcular el área usando la fórmula de Herón
double Triangle::area() const {
    double d1 = p1.distanceTo(p2);
    double d2 = p2.distanceTo(p3);
    double d3 = p3.distanceTo(p1);
    double s = perimeter() / 2; // Semiperímetro
    return sqrt(s * (s - d1) * (s - d2) * (s - d3));
}

// Método para mostrar los vértices del triángulo
void Triangle::displayVertices() const {
    cout << "Vértices del triángulo:" << endl;
    cout << "P1(" << p1.getX() << ", " << p1.getY() << ")" << endl;
    cout << "P2(" << p2.getX() << ", " << p2.getY() << ")" << endl;
    cout << "P3(" << p3.getX() << ", " << p3.getY() << ")" << endl;
}
