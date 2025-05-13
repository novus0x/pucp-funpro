#include <stdio.h>

int main() {
	// Variables
	double pH;

	// Operations
	printf("Escribe la cantidad de potencial de hidrógeno (PH): ");
	scanf("%lf", &pH);
	
	if (pH < 7) {
		printf("La solución es ácida\n");
	} else if (pH == 7) {
		printf("La solución es neutra\n");
	} else {
		printf("La solución es alcalina\n");
	}

	return 0;
}
