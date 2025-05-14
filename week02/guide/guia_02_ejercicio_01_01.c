#include <stdio.h>
#include <math.h>

int main() {
	// Variables
	int n, sum, i;

	// Operations
	printf("Ingrese un numero: ");
	scanf("%d", &n);

	printf("Suma de cubos (metodo 1): ");
	sum = (pow(n, 2) * pow(n + 1, 2)) / 4; // Formula
	printf("%d\n", sum);

	printf("Suma de cubos (metodo 2): ");
	sum = 0;
	for (i = 1; i <= n; i++) { // Iteracion
		sum += pow(i, 3);
	}
	printf("%d\n", sum);

	return 0;
}
