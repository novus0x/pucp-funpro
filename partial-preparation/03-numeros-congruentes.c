#include <stdio.h>
#include <math.h>

// Prototipos
int congluentes(int, int, int);

// Main function
int main() {
	// Variables
	int cant_cifras, divisor, min, max, i, j, current, ant_i, ant_j;

	// Obtener datos
	printf("Ingrese la cantidad de cifras (>0 y <10): ");
	scanf("%d", &cant_cifras);
	printf("Ingrese el divisor (>0 y <50): ");
	scanf("%d", &divisor);

	// Validar datos si no salir
	if (cant_cifras < 0 || cant_cifras > 10 || divisor < 0 || divisor > 50) {
		printf("Alguno de los datos ingresados no es valido\n");
		return 0;
	}
	
	// Hallar rango
	min = pow(10, cant_cifras - 1);
	max = pow(10, cant_cifras) - 1;
	printf("Parejas congluentes en el rango [%d,%d]:\n", min, max);
	printf("-------------------------------------------------------\n");

	// Parejas
	i = min, j = max, current = 0;
	while (i < j) {
		if (congluentes(i, j, divisor)) {
			current++; // Aumentar cantidad de parejas (current = actual)
			// Mostrar pareja
			printf("Pareja %d: (%d, %d)\n", current, i, j);
			printf("%d mod %d = %d mod %d\n", i, divisor, j, divisor);
			if (current > 1) {
				// Mostrar datos
				printf("Congruencia sumando la pareja anterior\n");
				printf("%d mod %d\t%d mod %d\n", (ant_i + i), divisor, (ant_j + j), divisor);
				// Comprobar que se cumpla la segunda condicion
				if (congluentes(ant_i + i, ant_j + j, divisor)) printf("(%d+%d) mod %d = (%d+%d) mod %d\n", ant_i, i, divisor, ant_j, j, divisor);
			}
			ant_i = i, ant_j = j;
			printf("-------------------------------------------------------\n");
		}
		i ++, j--;
	}
	
	// Mostrar mensaje dependiendo la cantidad de parejas
	printf("En el rango de numeros de %d digitos [%d,%d]\n", cant_cifras, min, max);
	if (current == 0) printf("No existen parejas de numeros congluentes con el numero %d\n", divisor);
	else if (current == 1) printf("Existe %d pareja de numeros congluentes con el numero %d\n", current, divisor);
	else printf("Existen %d parejas de numeros congluentes con el numero %d\n", current, divisor);

	return 0;
}

// Funciones
int congluentes(int num1, int num2, int divisor) {
	return num1 % divisor == num2 % divisor; // Validar si son congluentes
}
