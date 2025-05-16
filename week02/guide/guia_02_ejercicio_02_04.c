#include <stdio.h>
#include <math.h>

int main() {
	// Variables
	double n, val;

	// Operations
	printf("[!] Programa hecho para aproximar los factoriales de numeros grandes mediante la formula de Stirling\n");
	printf("[?] Ingresar un valor n: ");
	scanf("%lf", &n);
	val = sqrt(2 * M_PI * n) * pow(n / M_E, n);
	printf("[+] El valor del factorial es: %.6lf\n", val);

	return 0;
}
