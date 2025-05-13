#include <stdio.h>

int main() {
	// Variables
	double a, b, n;

	// Operations
	printf("[!] Programa desarrollado para validar la pertenencia en el rango\n");
	printf("[?] Teniendo en cuenta un rango [a;b], ingresa el valor a: ");
	scanf("%lf", &a);
	printf("[?] Ingresar el valor b: ");
	scanf("%lf", &b);
	printf("[?] Ingresar el valor numerico a corroborar: ");
	scanf("%lf", &n);

	if (a < n && n < b) {
		printf("[+] El valor %lf pertenece a [%lf;%lf]\n", n, a, b);
	} else {
		printf("[+] El valor %lf no pertenece a [%lf;%lf]\n", n, a, b);
	}

	return 0;
}
