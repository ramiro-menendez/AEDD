#include<iostream>

using namespace std;


//----------------------------------------------
int main() {

    system("color F0");
	
	cout << "Esta es una prueba de system() con console-out" << endl;

	system("pause");
	
	return 0;
}
//----------------------------------------------

/*

Para cambiar el color del fondo de la consola y del texto pueden
utilizar la función system(“color XY”); siendo X un dígito hexadecimal que
indica el color del fondo e Y otro dígito hexadecimal que establece el color del
texto. Se debe incluir la libreria <cstdlib>.

0 = Negro 
1 = Azul 
2 = Verde 
3 = Aguamarina 
4 = Rojo 
5 = Púrpura 
6 = Amarillo 
7 = Blanco 
8 = Gris
9 = Azul claro
A = Verde claro
B = Aguamarina claro
C = Rojo claro
D = Púrpura claro
E = Amarillo claro
F = Blanco brillante

--- CAMBIAR SOLO UNA PARTE ---

SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),X);
El valor de X debe estar entre 0 y 255 y se calcula de la siguiente manera:

X=W*16+Z;

Siendo W=Color del fondo y Z=Color del texto. Ambos colores son un
número del 0 al 15 dado por la tabla que se mostró en el ejemplo anterior.

*/