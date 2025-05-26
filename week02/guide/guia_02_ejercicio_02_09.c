#include <stdio.h>
#include <math.h>

int main() {
	// Variables
	int x1, y1, x2, y2, aux1, aux2;
	double d;

	// Operations
	printf("[!] Programa hecho para obtener la distancia entre dos puntos\n");
	printf("[?] Primer punto (x1, y1): ");
	scanf("%d %d", &x1, &y1);
	printf("[?] Segundo punto (x2, y2): ");
	scanf("%d %d", &x2, &y2);

	aux1 = pow(x2 - x1, 2);
	aux2 = pow(y2 - y1, 2);
	d = sqrt(aux1 + aux2);
	printf("[+] La distancia es de: %.9lf m\n", d);


	return 0;
}
