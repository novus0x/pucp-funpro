#include <stdio.h>
#include <math.h>

int main() {
	// Variables
	int check;
	double vo, a, t;
	double vfm, vfkm, d, vm;

	// Operations
	printf("Ingrese la velocidad inicial (m/s): ");
	scanf("%lf", &vo);
	printf("Ingrese la aceleracion (m/s^2): ");
	scanf("%lf", &a);
	printf("Ingrese el tiempo (s): ");
	scanf("%lf", &t);
	
	vfm = vo + a * t;
	d = vo * t + (a * pow(t, 2)) / 2;
	vm = (vo + vfm) / 2;

	vfkm = vfm * (pow(60, 2)/1000);
	check = vfm > vm;

	printf("\nResultados:\n");
	printf("Velocidad final (m/s): %.2lf\n", vfm);
	printf("Velocidad final (km/h): %.2lf \n", vfkm);
	printf("Distancia recorrida (m): %.2lf\n", d);
	printf("Velocidad media (m/s): %.2lf\n", vm);
	printf("La velocidad final es mayor que la velocidad media: %d\n", check);

	return 0;
}
