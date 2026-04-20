#include <iostream>
#include "Triangle.hpp"

using namespace std;

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
