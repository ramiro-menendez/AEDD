#include<iostream>

using namespace std;

struct Empleado {
    char nombre[32];
    Direccion dir;
    Fecha nacimiento;
    char sexo;
    float sueldo;
    char categoria[16];
    Fecha ingreso;
};

struct Direccion {
    char calle[16], barrio[16];
    int numero;
}

struct Fecha {
    int dia, mes, anio;
}

//----------------------------------------------
int main() {
	
	return 0;
}
//----------------------------------------------
