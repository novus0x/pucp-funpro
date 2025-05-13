#include <stdio.h>

int main() {
	// Variables
	double p1, v1, p2, v2;

	// Operations
	printf("[!] Programa sobre la aplicación de la ley de Boyle\n");
	printf("[?] Ingresar la presión 1 (mmHg): ");
	scanf("%lf", &p1);
	printf("[?] Ingresar el volumen 1: ");
	scanf("%lf", &v1);
	printf("[?] Ingresa la presión 2 (mmHg): ");
	scanf("%lf", &p2);

	v2 = (p1 * v1) / p2;

	printf("La presión 2 será de %lf\n", v2);

	return 0;
}
