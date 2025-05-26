#include <stdio.h>

int main() {
	// Variables
	double t, v, d;

	// Operations
	printf("[!] Programa hecho para obtener la distancia recorrida\n");
	printf("[?] Ingrese la velocidad (km/h) y el tiempo (min): ");
	scanf("%lf %lf", &v, &t);
	
	v = (v * 1000) / 3600;
	t = t * 60;

	d = v * t;
	printf("[+] La distancia recorrida es: %.2lf m\n", d);

	return 0;
}
