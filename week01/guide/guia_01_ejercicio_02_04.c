#include <stdio.h>
#include <math.h>

int main () {
	// Variables
	double lado, area;

	// Operations
	printf("Ingresa el lado: ");
	scanf("%lf", &lado);
	area = pow(lado, 2);

	printf("El area del cuadrado es de: %lf\n", area);

	return 0;
}
