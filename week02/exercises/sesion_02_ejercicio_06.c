#include <stdio.h>
#include <math.h>

int main() {
	// Variables
	double radio, height, axis1, axis2, esc1, esc2;

	// Operations esc1
	printf("Escenario 1: Cono oblicuo de base circular\n");
	printf("Ingrese el radio de la base circular en centimetros:\n");
	scanf("%lf", &radio);
	printf("Ingrese la altura del cono oblicuo en metros:\n");
	scanf("%lf", &height);

	radio = radio / pow(10, 2);

	esc1 = (M_PI * pow(radio, 2) * height) / 3;
	printf("El volumen del cono oblicuo de base circular es: %.10lf metros ^3\n", esc1);
	
	// Operations esc2
	printf("Escenario 2: Cono oblicuo de base eliptica\n");
	printf("Ingrese la altura del cono oblicuo en metros:\n");
	scanf("%lf", &height);
	printf("Ingrese los ejes de la base eliptica en milimetros:\n");
	scanf("%lf %lf", &axis1, &axis2);
	axis1 = axis1 / pow(10, 3);
	axis2 = axis2 / pow(10, 3);

	esc2 = (M_PI * height * axis1 * axis2) / 3;

	printf("El volumen del cono oblicuo de base eliptica es: %.10lf metros ^3\n", esc2);
	
	if (esc1 > esc2) printf("El escenario 1 tiene mayor volumen que el escenario 2: VERDADERO\n");
	else printf("El escenario 1 tiene mayor volumen que el escenario 2: FALSO\n"); 
	if (esc2 > esc1) printf("El escenario 2 tiene mayor volumen que el escenario 1: VERDADERO\n");
	else printf("El escenario 2 tiene mayor volumen que el escenario 1: FALSO\n");

	return 0;
}
