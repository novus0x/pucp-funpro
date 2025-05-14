#include <stdio.h>

int main() {
	// Variables
	double v1, t1, v2, t2;

	// Operations
	printf("[!] Programa hecho para la aplicacion de la ley de Charles\n");
	printf("[?] Ingrese el volumen 1 en cm^3: ");
	scanf("%lf", &v1);
	printf("[?] Ingrese la temperatura 1 en C: ");
	scanf("%lf", &t1);
	printf("[?] Ingrese la temperatura 2 en C: ");
	scanf("%lf", &t2);

	v2 = (v1 * t2) / t1; // Calculo hallar volumen 2
	printf("[+] El volumen 2 es de: %.2lf cm^3\n", v2);

	return 0;
}
