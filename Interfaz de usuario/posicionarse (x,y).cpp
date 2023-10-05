#include<iostream>
#include<windows.h>

using namespace std;

void gotoxy(USHORT x,USHORT y);

//----------------------------------------------
int main() {

    gotoxy(2, 10);

	cout << "Esta es una prueba" << endl;
	
	return 0;
}
//----------------------------------------------

void gotoxy(USHORT x,USHORT y) {
 COORD cp = {x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cp);
}



/*

La esquina superior izquierda es el origen de coordenadas.

Tiene que incluirse la libreria <windows.h>


*/