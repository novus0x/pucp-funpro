#include <stdio.h>
#include <math.h>

int main() {
	// Variables
	double pi_sr, error;

	// Operations
	printf("[?] Programa hecho para calcular el error al usar el metodo de Srinivasa Ramanujan al hallar pi\n");
	pi_sr = (9801/4412) * sqrt(2);
	error = M_PI - pi_sr;
	printf("[+] Valor de pi segun Srinivasa: %.10lf\n", pi_sr);
	printf("[+] Valor de pi cual usamos todos: %.10lf\n", M_PI);
	printf("[+] Margen de error: %.10lf\n", error);

	return 0;
}
