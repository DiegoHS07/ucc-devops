#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int areaCirculo(double radio) {
	double PI = 3.14159265358979323846;
	double area = 0.0;
	cout << "El radio del circulo es: " << radio << endl;
	area = pow(radio, 2) * PI;
	cout << "El area del ciculo es: " << area << endl;
	cout << "Diego Alejandro Higuera Sierra" << endl;
	return 0;
}

int areaTriangulo(double base, double altura) {
	double area = 0.0;
	cout << "La base del triangulo es: " << base << endl;
	cout << "La altura del triangulo es: " << altura << endl;
	area = (base * altura) / 2;
	cout << "El area del triangulo es: " << area << endl;
	cout << "Diego Alejandro Higuera Sierra" << endl;
	return 0;
}

int areaCuadrado(double lado) {
	double area = 0.0;
	cout << "El lado del cuadrado es: " << lado << endl;
	area = lado * lado;
	cout << "El area del cuadrado es: " << area << endl;
	cout << "Diego Alejandro Higuera Sierra" << endl;
	return 0;
}

int main() {
	cout << "*************** Calculadora de areas *************" << endl;
	cout << "";
	cout << "AREA DEL CIRCULO" << endl;
	areaCirculo(8);
	cout << "AREA DEL TRIANGULO" << endl;
	areaTriangulo(2,6);
	cout << "AREA DEL CUADRADO" << endl;
	areaCuadrado(12);
	return 0;
}
