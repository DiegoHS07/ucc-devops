#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
	int iVal = 5;
	int iNum = 1;
	double dSleep = 0;

	cout << "-------------------------- PROGRAMA HILO ----------------------------" << endl;
	for (int i = 1; i <= iVal; i++) {
		dSleep = 1 - (1/i);
		iNum += i;
		cout << "Ciclo :  " << i << " = " << iNum << endl;
		sleep(dSleep);
	}
	cout << "-------------------------- LLAMADO A PROGRAMA EXTERNO ------------------------------" << endl;
	system("./bin/CalculadoraAreasRaiz");
	cout << "-------------------------- FIN PROGRAMA ------------------------------" << endl;

	return 0;
}
