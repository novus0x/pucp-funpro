#include <stdio.h>

int main () {
	double lado_A, lado_B, lado_C;

	printf("Lado AB: ");
	scanf("%lf", &lado_A);
	printf("Lado BC: ");
	scanf("%lf", &lado_B);
	printf("LADO AC: ");
	scanf("%lf", &lado_C);

	if (lado_A + lado_B > lado_C && lado_A + lado_C > lado_B && lado_B + lado_C > lado_A) {
		printf("Cumple con el teorema de la desigualdad de triangulos\n");
	} else {
		printf("No cumple con el teorema de la desigualdad de triangulos\n");
	}

	return 0;
}
