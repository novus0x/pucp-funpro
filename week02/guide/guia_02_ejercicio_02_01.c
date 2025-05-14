#include <stdio.h>

int main() {
	// Variables
	double p1, v1, p2, v2;

	// Operations
	printf("[!] Programa hecho para la aplicacion de la ley de Boyle\n");
	printf("[?] Ingrese el volumen 1 en cm^3: ");
	scanf("%lf", &v1);
	printf("[?] Ingrese la presion 1 en mm: ");
	scanf("%lf", &p1);
	printf("[?] Ingrese la presion 2 en atm: ");
	scanf("%lf", &p2);

	p1 = p1 / 760; // Conversion
	v2 = (p1 * v1) / p2; // Calcular v2
	printf("[+] El volumen 2 sera de: %.2lf cm^3\n", v2);

	return 0;
}
