#include <stdio.h>
#include <math.h>

int main() {
	// Variables
	double g, m, s;
	double r;


	// Operations
	printf("[!] Programa hecho para realizar la conversion a radianes: ");
	printf("[?] Ingresar grados, minutos y segundos: ");
	scanf("%lf, %lf, %lf", &g, &m, &s);

	m = m  * (1.0 / 60.0);
	s = s * (1.0 / 3600.0);
	r = (g + m + s) / (360.0 / (2.0 * M_PI));
	printf("[+] La conversion en radianes es: %.2lf\n", r);

	return 0;
}
