#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cout << "Ingrese los coeficientes a, b y c: ";
    cin >> a >> b >> c;

    // Calculamos el discriminante
    double discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        // Dos soluciones reales distintas
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Las soluciones son: " << x1 << " y " << x2 << endl;
    } else if (discriminante == 0) {
        // Una solución real doble
        double x = -b / (2 * a);
        cout << "La solución doble es: " << x << endl;
    } else {
        // Soluciones imaginarias
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminante) / (2 * a);
        cout << "Las soluciones son: " << realPart << " + " << imaginaryPart << "i y "
             << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
