#include <stdio.h>
#include <math.h>

int main() {
	// Variables
	double diametroCas, alturaCas, radioCas, volumenCas;

	// Operations
	printf("Ingrese el diametro de la base del casquete en milimetros: ");
	scanf("%lf", &diametroCas);
	printf("Ingrese la altura del casquete en metros: ");
	scanf("%lf", &alturaCas);
	diametroCas = diametroCas / pow(10, 3);
	radioCas = diametroCas / 2;
	volumenCas = (M_PI * alturaCas * (3 * pow(radioCas, 2) + pow(alturaCas, 2))) / 6;
	printf("El casquete esferico tiene una altura de %.1lf metros y el radio es de %.4lf metros\n", alturaCas, radioCas);
	printf("El volumen del casquete esferico es: %.10lf metros ^3\n", volumenCas);

	return 0;
}
