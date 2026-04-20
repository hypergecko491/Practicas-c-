#include <iostream>
#include <cmath>

using namespace std;

// Clase Punto
class Punto {
private:
    double x, y;

public:
    // Constructor por omisión
    Punto() : x(0), y(0) {}

    // Constructor con parámetros
    Punto(double x, double y) : x(x), y(y) {}

    // Métodos para obtener las coordenadas
    double getX() const { return x; }
    double getY() const { return y; }

    // Método para establecer coordenadas
    void set(double nx, double ny) {
        x = nx;
        y = ny;
    }

    // Método para calcular la distancia entre dos puntos
    double distanceTo(const Punto& other) const {
        return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
    }
};

// Clase Triangle
class Triangle {
private:
    Punto p1, p2, p3;

public:
    // Constructor por omisión
    Triangle() : p1(0, 0), p2(50, 30), p3(25, 10) {}

    // Constructor con parámetros
    Triangle(const Punto& p1, const Punto& p2, const Punto& p3)
        : p1(p1), p2(p2), p3(p3) {}

    // Método para calcular el perímetro
    double perimeter() const {
        double d1 = p1.distanceTo(p2);
        double d2 = p2.distanceTo(p3);
        double d3 = p3.distanceTo(p1);
        return d1 + d2 + d3;
    }

    // Método para calcular el área usando la fórmula de Herón
    double area() const {
        double d1 = p1.distanceTo(p2);
        double d2 = p2.distanceTo(p3);
        double d3 = p3.distanceTo(p1);
        double s = perimeter() / 2; // Semiperímetro
        return sqrt(s * (s - d1) * (s - d2) * (s - d3));
    }

    // Método para mostrar los vértices del triángulo
    void displayVertices() const {
        cout << "Vértices del triángulo:" << endl;
        cout << "P1(" << p1.getX() << ", " << p1.getY() << ")" << endl;
        cout << "P2(" << p2.getX() << ", " << p2.getY() << ")" << endl;
        cout << "P3(" << p3.getX() << ", " << p3.getY() << ")" << endl;
    }
};

// Función principal para probar las clases
int main() {
    // Crear un triángulo utilizando el constructor por omisión
    Triangle t;

    // Mostrar los vértices del triángulo
    t.displayVertices();

    // Calcular y mostrar el perímetro
    cout << "Perímetro: " << t.perimeter() << endl;

    // Calcular y mostrar el área
    cout << "Área: " << t.area() << endl;

    return 0;
}
