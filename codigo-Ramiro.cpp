#include<iostream>
#include<cstring>

using namespace std;

void factorial(int);
int pow(int a, int b);

//----------------------------------------------
int main() {
	
	string S;
	int longitud, permutaciones;

	longitud=S.length();

	for(int i=longitud; i>0; i--) {
		permutaciones+=pow(longitud, i);
	}

	cout << permutaciones;

	return 0;
}
//----------------------------------------------

void factorial(int num) {
	if(num==0) return 1;
	return num*factorial(num-1);
}

int pow(int a, int b) {
	if(b==0) return 1;
	return a*pow(a, b-1);
}

