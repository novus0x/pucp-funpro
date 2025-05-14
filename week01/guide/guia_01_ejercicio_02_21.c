#include <stdio.h>
#include <math.h>

int main() {
	// Variables
	double f, q1, q2, d, k;
	k = 9 * pow(10, 9);

	// Operations
	printf("Ingresar la carga 1 en milicoulombos: ");
	scanf("%lf", &q1);
	printf("Ingresar la carga 2 en coulombos: ");
	scanf("%lf", &q2);
	printf("Ingrese la distancia que sepera entre ambas cargas en micrometros: ");
	scanf("%lf", &d);
	
	q1 = q1 / pow(10, 3);
	d = d / pow(10, 6);
	f = (k * q1 * q2) / pow(d, 2);	

	// Results
	printf("La carga 1 tiene %.6lf coulombos, la carga 2 tiene %.6lf coulombos y la distancia que separa ambas cargas es: %.2lf\n", q1, q2, d);
	printf("La fuerza entre ambas cargas es: %.0lf Newtons\n", f);

	return 0;
}
