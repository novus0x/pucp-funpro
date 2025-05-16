#include <stdio.h>
#include <math.h>

int main() {
	// Variables	
	double x, val;

	// Operations
	printf("[!] Programa hecho para obtener el seno hiperbolico\n");
	printf("[?] Ingrese el valor de x (angulo en radianes): ");
	scanf("%lf", &x);
	val = (exp(x) - exp(-x))/ 2;
	printf("[+] El valor del seno hiperbolico es: %.4lf\n", val);

	return 0;
}
