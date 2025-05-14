#include <stdio.h>
#include <math.h>

int main() {
	// Variables
	int a, b, c;
	double discriminante, x1, x2;

	// Operations
	printf("[?] El programa se encarga de hallar las raices de una ecuacion cuadratica\n");
	printf("[!] Observacion el programa esta hacho para discriminante > 0\n");
	printf("Ingrese los coeficientes a, b y c: ");
	scanf("%d %d %d", &a, &b, &c);
	discriminante = pow(b, 2) - 4 * a * c;
	x1 = (-b + sqrt(discriminante)) / 2 * a;
	x2 = (-b - sqrt(discriminante)) / 2 * a;

	printf("La raiz x1: %.2lf\n", x1);
	printf("La raiz x2: %.2lf\n", x2);

	return 0;
}
