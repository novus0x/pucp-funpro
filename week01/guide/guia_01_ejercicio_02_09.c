#include <stdio.h>

int main() {
	// Variables
	double t1, v1, t2, v2;

	// Operations
	printf("[!] Programa diseñado para un problema de química I para la aplicación de la Ley de Charles\n");
	printf("[?] Ingresa la temperatura 1: ");
	scanf("%lf", &t1);
	printf("[?] Ingrese el volumen 1: ");
	scanf("%lf", &v1);
	printf("[?] Ingresa la temperatura 2: ");
	scanf("%lf", &t2);

	v2 = (v1 * t2) / t1;
	printf("[+] El volumen final es de %lf cm3\n", v2);
	
	return 0;
}
