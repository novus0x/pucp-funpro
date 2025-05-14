#include <stdio.h>
#include <math.h>
#define base1 3.567
#define base2 809.7
#define base3 12.6
#define base4 (4.0/3.0)

int main() {
	// Variables
	double x, f1, f2, f3, aux1, aux2;

	// Operations
	printf("Evaluacion de las funciones con x: ");
	scanf("%lf", &x);

	aux1 = sqrt(base2);
	f1 = pow(base1, x) - pow(aux1, 2*x) + pow(1/base3, x - 0.23) + pow(base4, x/7);
	aux1 = (double)1/pow(base2, 2);
	aux2 = sqrt(base4);
	f2 = pow(base1, 3*x + 2) + pow(aux1, x/2) + pow(aux2, -x);
	aux1 = sqrt(x);
	f3 = 5 * pow(base1, aux1) + (pow(base2, x - 1) / 3) - (pow(base3 - 5, x/2) / 5);

	printf("Funcion 1: %.6lf\n", f1);
	printf("Funcion 2: %.6lf\n", f2);
	printf("Funcion 3: %.6lf\n", f3);

	return 0;
}
