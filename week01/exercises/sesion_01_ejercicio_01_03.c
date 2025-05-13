#include <stdio.h>

int main () {
	double a, b, c;
	printf("Considering the structure of a quadratic equation\n");
	printf("Type the value of a: ");
	scanf("%lf", &a);
	printf("Type the value of b: ");
	scanf("%lf", &b);
	printf("Type the value of c: ");
	scanf("%lf", &c);

	double is_complex = b * b - 4 * a * c;
	if (is_complex < 0) {
		printf("The equation have a complex solution\n");
	} else {
		printf("The equation don't have a complex solution\n");
	}

	return 0;
}
