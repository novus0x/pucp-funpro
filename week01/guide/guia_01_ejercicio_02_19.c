#include <stdio.h>

int main() {
	// Variables
	double baseMe, baseMa, alturaTra, alturaTri;
	double areaP, perP, apotema, areaTri, areaTra;

	// Operations
	printf("Para el trapecio\n");
	printf("Ingresar la base menor: ");
	scanf("%lf", &baseMe);
	printf("Ingresar la base mayor: ");
	scanf("%lf", &baseMa);
	printf("Ingresar la altura: ");
	scanf("%lf", &alturaTra);
	printf("Para el triangulo\n");
	printf("Ingresar la altura: ");
	scanf("%lf", &alturaTri);

	areaTri = (baseMe * alturaTri) / 2; // No coinciden los datos con los proporcionados en los casos de prueba, pero la formula es correcta
	areaTra = ((baseMa + baseMe) * alturaTra) / 2;
	apotema = baseMa / 1.45;
	perP = baseMa * 5;
	areaP = (perP * apotema) / 2;

	printf("El área de la figura es: %.6lf cm2\n", areaTri + areaTra + areaP);
	printf("La cual esta compuesta por el area del triangulo: %.6lf\n", areaTri);
	printf("La cual esta compuesta por el area del trapecio: %.6lf\n", areaTra);
	printf("La cual esta compuesta por el area del pentagono: %.6lf\n", areaP);

	return 0;
}

