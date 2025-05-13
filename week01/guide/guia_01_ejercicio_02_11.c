#include <stdio.h>

int main() {
	// Variables
	double lado_a, lado_b, lado_c;

	// Operations
	printf("[!] Programa desarrollado para una saber sobre triangulos\n");
	printf("[?] Ingresar el lado A: ");
	scanf("%lf", &lado_a);
	printf("[?] Ingresar al lado B: ");
	scanf("%lf", &lado_b);
	printf("[?] Ingresar el lado C: ");
	scanf("%lf", &lado_c);

	if (lado_a == lado_b && lado_a == lado_c) {
		printf("El triangulo es isosceles\n");
	} else {
		printf("El triangulo no es isosceles\n");
	}

	return 0;
}
