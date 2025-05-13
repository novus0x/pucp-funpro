#include <stdio.h>

int main () {
	int wavelength;

	printf("What is the wavelength?: ");
	scanf("%d", &wavelength);

	if (wavelength >= 460 && wavelength <= 482) {
		printf("The wave color is blue\n");
	} else {
		printf("The wave color is not blue\n");
	}

	return 0;
}
