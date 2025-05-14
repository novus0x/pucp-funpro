#include <stdio.h>
#include <math.h>

int main() {
	// Variables
	double base, num, logar;

	// Operations
	printf("[?] Programa hecho para el cambio de base de un logaritmo\n");
	printf("Ingrese el numero y la base: ");
	scanf("%lf %lf", &num, &base);
	logar = log(num)/log(base);
	printf("[+] El logaritmo es %.2lf\n", logar);

	return 0;
}
