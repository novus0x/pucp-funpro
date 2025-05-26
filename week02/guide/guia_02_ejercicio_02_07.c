#include <stdio.h>
#include <math.h>

int main() {
	// Variables
	double t, a, vf, d; 	

	// Operations
	printf("[!] Programa hecho para obtener la velocidad final y distancia recorrida\n");
	printf("[?] Ingrese la aceleracion(m/s^2) y el tiempo (min): ");
	scanf("%lf %lf", &a, &t);

	vf = a * t;
	d = (a * pow(t, 2)) / 2;
	printf("[+] La velocidad final es: %.2lf m/s y la distancia recorrida es: %.2lf m\n", vf, d);

	return 0;
}
