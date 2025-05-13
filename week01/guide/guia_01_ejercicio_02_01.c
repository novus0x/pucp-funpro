#include <stdio.h>

int main() {
	// Variables
	int dosis_mSv;

	// Operations
	printf("Escribe la radiación ionizante: ");
	scanf("%d", &dosis_mSv);

	if (dosis_mSv >= 500) {
		printf("La dosis causará nauseas\n");
	} else {
		printf("La dosis no causará nauseas\n");
	}

	return 0;
}
