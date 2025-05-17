#include <stdio.h>
#include <math.h>

// Prototipos
int leer_usuario(int *, int *);
int numero_casa_1(int);
int numero_casa_2(int);
int numero_lucas(int);

// Main function
int main() {
	// Variables
	int option, posicion;

	// Obtener datos usuario
	if (!leer_usuario(&option, &posicion)) return 0;
	if (option == 1) {
		printf("El numero casa en la posicion 7 calculado con la sumatoria es: %d\n", numero_casa_1(posicion));
		printf("El numero casa en la posicion 7 calculado con la formula es: %d\n", numero_casa_2(posicion));
		if (numero_casa_1(posicion) == numero_casa_2(posicion)) printf("Se comprueba que los resultados de ambas formulas son equivalentes\n");
		else printf("Los resultados de ambas formulas no son equivalentes\n");
	} else printf("El numero Lucas en la posicion %d es %d\n", posicion, numero_lucas(posicion));

	return 0;
}

// Functions
int leer_usuario(int *option, int *posicion) {
	printf("Seleccione 1 si desea encontrar un numero casa, 2 para encontrar un numero Lucas: ");
	scanf("%d", option);
	printf("Ingrese la posicion del numero que desea encontrar: ");
	scanf("%d", posicion);

	if (*option != 1 && *option != 2) {
		printf("Opcion invalida\n");
		return 0;
	}
	if (*posicion <= 0) {
		printf("Posicion invalida\n");
		return 0;
	}
	
	return 1;
}

int numero_casa_1(int n) {
	// Variables
	int i = 0, sum = 0;
	
	// Iteracion
	while (i <= n) {
		sum += pow(i, 2);
		i++;
	}

	return sum + pow(n + 1, 3);
}

int numero_casa_2(int n) {
	// Variables
	int sum = 0;

	sum = (8 * pow(n, 3) + 21 * pow(n, 2) + 19 * n + 6) / 6; // Forma 2
	return sum;
}

int numero_lucas(int n) {
	// Variables
	int numL0 = 2, numL1 = 1, sumL = 0, i = 2;

	// Elegir caso
	if (n == 0) return numL0; // Caso n = 0
	else if (n == 1) return numL1; // Caso n = 1
	// Caso n >= 2
	while(i <= n) {
		sumL = numL0 + numL1;
		numL0 = numL1;
		numL1 = sumL;
		i++;
	}

	return sumL;
}
