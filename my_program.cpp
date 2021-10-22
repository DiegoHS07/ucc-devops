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
	double raiz = sqrt(area);
	cout << "Su raíz cuadrada es: " << raiz << endl;
	return 0;
}

int areaTriangulo(double base, double altura) {
	double area = 0.0;
	cout << "La base del triangulo es: " << base << endl;
	cout << "La altura del triangulo es: " << altura << endl;
	area = (base * altura) / 2;
	cout << "El area del triangulo es: " << area << endl;
	double raiz = sqrt(area);
	cout << "Su raíz cuadrada es: " << raiz << endl;
	return 0;
}

int areaCuadrado(double lado) {
	double area = 0.0;
	cout << "El lado del cuadrado es: " << lado << endl;
	area = lado * lado;
	cout << "El area del cuadrado es: " << area << endl;
	double raiz = sqrt(area);
	cout << "Su raíz cuadrada es: " << raiz << endl;
	return 0;
}

int main() {
	cout << "======================================" << endl;
	cout << "======== Calculadora de areas ========" << endl;
	cout << "======================================" << endl;
	cout << "         AREA DEL CIRCULO" << endl;
	cout << "======================================" << endl;
	areaCirculo(8);
	cout << "======================================" << endl;
	cout << "         AREA DEL TRIANGULO" << endl;
	cout << "======================================" << endl;
	areaTriangulo(2,6);
	cout << "======================================" << endl;
	cout << "         AREA DEL CUADRADO" << endl;
	cout << "======================================" << endl;
	areaCuadrado(12);
	cout << "======================================" << endl;
	cout << "    Diego Alejandro Higuera Sierra" << endl;
	cout << "======================================" << endl;
	return 0;
}
