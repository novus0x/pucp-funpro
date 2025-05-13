#include <stdio.h>

int main() {
	// Variables
	double v1, v2;

	// Operations
	printf("[!] Programa desarrollado para comprobar que velocidad es mayor\n");
	printf("[?] Escribe la velocidad 1: ");
	scanf("%lf", &v1);
	printf("[?] Escribe la velocidad 2: ");
	scanf("%lf", &v2);

	if (v1 == v2) {
		printf("[+] Las velocidades son iguales\n");
	} else if(v1 > v2) {
		printf("[+] La velocidad 1 es mayor\n");
	} else {
		printf("[+] La velocidad 2 es mayor\n");
	}

	return 0;
}
