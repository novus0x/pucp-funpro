#include <stdio.h>

int main () {
	// Variables
	double base, altura, area;

	// Operations
	printf("Ingresa la base: ");
	scanf("%lf", &base);
	printf("Ingrese la altura: ");
	scanf("%lf", &altura);

	area = (base * altura) / 2;

	printf("El area del triangulo es de: %lf\n", area);

	return 0;
}
