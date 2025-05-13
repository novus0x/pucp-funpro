#include <stdio.h>

int main() {
	// Variables
	double radianes, sexagesimal, pi = 3.141593;

	// Operations
	printf("Escribe los grados sexagesimales a convertir: ");
	scanf("%lf", &sexagesimal);
	
	radianes = sexagesimal * (pi / 180);
	printf("La conversión de sexagesimales a radiales es de: %lf --> %lf\n", sexagesimal, radianes);

	return 0;
}
