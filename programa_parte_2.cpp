
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
