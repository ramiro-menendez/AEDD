#include<iostream>

using namespace std;

struct PuntoEnPlano {
    float x, y;
};

struct Linea {
    PuntoEnPlano A, B;
};

struct Fecha {
    int dia, mes, anio;
};

struct Persona {
    int edad;
    char nombre[32];
    char sexo;
};

struct Estudiante {
    Persona datos;
    char carrera[16];
    int materiasAprobadas, anioIngreso;
};

struct ListaCurso {
    Estudiante estudiante[60];   
};

struct Empleado {
    Persona p;
    int aniosAntiguedad;
    float salario;
    char puesto[16];
};

struct Naipe {
    int valor;
    char palo;
};

struct Mazo {
    Naipe n[54];
};

struct Libro {
    float precio;
    int nroPaginas;
    char titulo[32], autor[20];
};

struct Inventario {
    Libro lib[256];
}

//----------------------------------------------
int main() {
	
	
	
	return 0;
}
//----------------------------------------------
