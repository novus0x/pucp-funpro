#include <stdio.h>

int main() {
	// Variables
	double a, b, c;

	// Operations
	printf("[!] Programa diseñado para la comparación múltiple\n");
	printf("[?] Ingresar valor a: ");
	scanf("%lf", &a);
	printf("[?] Ingresa valor b: ");
	scanf("%lf", &b);
	printf("[?] Ingresa valor c: ");
	scanf("%lf", &c);

	if (a == b && a == c) {
		printf("[+] Los valores son iguales\n");
	} else if(a > b && a > c) {
		printf("[+] El valor a es el mayor\n");
	} else if(b > a && b > c) {
		printf("[+] El valor b es el mayor\n");
	} else if (c > a && c > b) {
		printf("[+] El valor c es el mayor\n");
	} else {
		printf("[-] No se ha añadido una operacion para esto\n");
	}

	return 0;
}
