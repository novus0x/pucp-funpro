#include <stdio.h>
#include <math.h>

int main() {
	// Variables
	double altura, peso, imc;

	// Operations
	printf("Escribe tu altura: ");
	scanf("%lf", &altura);
	printf("Escribe el peso: ");
	scanf("%lf", &peso);

	imc = peso / pow(altura, 2);
	printf("Tu IMC es de: %lf\n", imc);

	return 0;
}
