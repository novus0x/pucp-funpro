#include <stdio.h>
#include <math.h>

int main() {
	// Variableus
	double resistencia, voltaje, corriente, esc1;

	// Operations
	printf("Escenario 1, con datos de resistencia y corriente:\n");
	printf("Ingrese la resistencia eléctrica en ohmios: ");
	scanf("%lf", &resistencia);
	printf("Ingrese la corriente en miliamperios: ");
	scanf("%lf", &corriente);
	corriente = corriente / pow(10, 3);
	esc1 = (resistencia * pow(corriente, 2)) / pow(10, 3);

	printf("El motor con resistencia de %.1lf ohmios y corriente de %.4lf A es %.10lf kw\n", resistencia, corriente, esc1);

	return 0;
}
