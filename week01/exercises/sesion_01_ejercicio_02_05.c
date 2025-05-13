#include <stdio.h>
#include <math.h>

int main () {
	
	// Variables
	double lado_a, lado_b, lado_c, lado_d, ang_a, ang_b, ang_c, ang_d;
	int angulos_iguales, angulos_iguales_opuestos, ang_1, ang_2, lados_iguales, lados_paralelos_iguales;

	// Obtener datos
	printf("Siguiendo el sgte esquema: lado angulo \n");
	printf("Lado y angulo a: ");
	scanf("%lf %lf", &lado_a, &ang_a);
	printf("Lado y angulo b: ");
	scanf("%lf %lf", &lado_b, &ang_b);
	printf("Lado y angulo c: ");
	scanf("%lf %lf", &lado_c, &ang_c);
	printf("Lado y angulo d: ");
	scanf("%lf %lf", &lado_d, &ang_d);

	// Operaciones
	angulos_iguales = ang_a == ang_b && ang_a == ang_c && ang_a == ang_d;
	angulos_iguales_opuestos = ang_a == ang_c && ang_b == ang_d;
	
	ang_1 = ang_a > 90 && ang_b < 90;
	ang_2 = ang_a < 90 && ang_b > 90;
	
	lados_iguales = lado_a == lado_b && lado_a == lado_c && lado_a == lado_d;
	lados_paralelos_iguales = lado_a == lado_c && lado_b == lado_d;

	// Cuadrado
	if (lados_iguales && angulos_iguales && ang_a == 90) {
		printf("Es un cuadrado\n");
	}

	// Rectangulo
	if (lados_paralelos_iguales && lado_a != lado_d && angulos_iguales && ang_a == 90) {
		printf("Es un rectangulo\n");
	}

	// Rombo
	if (lados_iguales && angulos_iguales_opuestos) {
		if (ang_1 || ang_2) {
			printf("Es un rombo\n");
		}
	}

	// Romboide
	if (lados_paralelos_iguales && lado_a != lado_b && angulos_iguales_opuestos) {
		if (ang_1 || ang_2) {
			printf("Es un romboide\n");
		}
	}


	return 0;
}
