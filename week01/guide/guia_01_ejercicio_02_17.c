#include <stdio.h>
#include <math.h>

int main() {
	// Variables
	int a, b, x, y, z, aux;

	// Operations
	printf("[!] Ingrese a y b:\n");
	scanf("%d %d", &a, &b);

	x = pow(a, 4) + pow(b, 4);
	y = (a + b) * (a - b) * (pow(a + b, 2) - 2 * a * b) + 2 * pow(b, 4);
	aux = pow(a + b, 2);
	z = pow(aux - 2 * a * b, 2) - 2 * pow(a * b, 2);
	printf("El resultado de: %d^4 + %d^4 es:\n", a, b);
	printf("De acuerdo a la primera ecuacion: %d\n", x);
	printf("De acuerdo a la segunda ecuacion: %d\n", y);
	printf("De acuerdo a la tercera ecuacion: %d\n", z);
	
	printf("Las tres ecuaciones son iguales: ");
	if (x == y && x == z) printf("VERDADERO\n");
	else printf("FALSO\n");

	return 0;
}
