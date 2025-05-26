#include <stdio.h>

int main() {
	// Variables
	int f = 440;
	double v, l;

	// Operations
	printf("[!] Programa hecho para obtener la longitud de onda\n");
	printf("[?] Ingrese la velocidad (m/s): ");
	scanf("%lf", &v);

	l = v / f;
	printf("[+] La longitud de onda es de: %.9lf\n", l);

	return 0;
}
