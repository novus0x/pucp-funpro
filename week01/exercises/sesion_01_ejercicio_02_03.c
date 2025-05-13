#include <stdio.h>

int main () {
	double lado_A, lado_B, lado_C;

	printf("Lado AB: ");
	scanf("%lf", &lado_A);
	printf("Lado BC: ");
	scanf("%lf", &lado_B);
	printf("Lado AC: ");
	scanf("%lf", &lado_C);

	if (lado_A != lado_B && lado_A != lado_C && lado_B != lado_C) {
		printf("El triangulo es escaleno\n");
	} else {
		printf("El triangulo no es escaleno\n");
	}

	return 0;
}
