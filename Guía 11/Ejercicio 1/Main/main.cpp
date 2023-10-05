#include<iostream>
#include<cstring>
using namespace std;

struct Biblioteca {
	Libros L[];
};

struct Libro {
	string titulo;
	Capitulo C[];
	bool prestado;
};

struct Capitulo {
	int numero;
	char titulo[];
	int paginas;
	string texto;
};

float cantidadDePaginasPromedio(Biblioteca);
void listadoDePrestamos(Biblioteca, Libro[]);

int main (int argc, char *argv[]) {
	
	Biblioteca biblio;
	
	Libro librosPrestados[];
	
	return 0;
}

float cantidadDePaginasPromedio(Biblioteca biblio) {
	unsigned int cantTotPag=0;
	for(int i=0; i<1000; i++) {
		for(int j=0; j<tam; j++) {
			cantTotPag+=biblio.L[i].C[j].paginas;
		}
	}
	return cantTotPag/1000.0;
}

void listadoDePrestamos(Biblioteca biblio, Libro lista[]) {
	for(int i=0; i<1000; i++) {
		if(biblio.L[i].prestado) {
			lista[i]=L[i];
		}
	}
}

void ordenAlfabetico(Biblioteca biblio) {
	int TL=0;
	int cantCap;
	Libro lista[1000];
	
	for(int i=0; i<1000; i++) {
		cantCap = sizeof(biblio.L[i].C)/sizeof(biblio.L[i].C[0]);
		if(cantCap>10) {
			lista[TL]=biblio.L[i];
			TL++;
		}
	}
	
	Libro aux;
	
	for(int i=0; i<TL; i++) {
		for(int j=1; j<TL; j++) {
			if(lista[i].titulo[0]<lista[i-1].titulo[0]) {
				aux=lista[i];
				lista[i]=lista[i-1];
				lista[i-1]=aux;
			}
		}
	}
	
	for(int i=0; i<TL; i++) {
		cout << biblio.L[i].titulo << endl;
	}
}
