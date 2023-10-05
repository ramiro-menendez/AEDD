#include <iostream>
#include <iomanip>
#define pi 3.14159

using namespace std;

int main() {

    double A, B, C;

    cin >> A >> B >> C;

    cout << "TRIANGULO: " << setprecision(3) << fixed
        << A*C/2 << endl
        << "CIRCULO: " << setprecision(3) << fixed
        << pi*C*C << endl
        << "TRAPEZIO: " << setprecision(3) << fixed
        << (A*C+B*C)/2 << endl
        << "QUADRADO: " << setprecision(3) << fixed
        << B*B << endl
        << "RETANGULO: " << setprecision(3) << fixed
        << A*B << endl;
}