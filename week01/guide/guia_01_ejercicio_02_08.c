#include <stdio.h>

int main() {
	// Variables
	double distancia, v1, v2, tiempo;

	// Operations
	printf("[!] Programa diseñado para un problema de física MRU (Tiempo de encuentro)");
	printf("[?] Ingresa la distancia: ");
	scanf("%lf", &distancia);
	printf("[?] Ingrese la velocidad 1: ");
	scanf("%lf", &v1);
	printf("[?] Ingrese la velocidad 2: ");
	scanf("%lf", &v2);
	
	tiempo = distancia / (v1 + v2);

	printf("El tiempo de encuentro es de: %lf\n", tiempo);

	return 0;
}
