#include <stdio.h>

int main () {
	// Variables
	int year;
	double p, q, r, p2, q2, r2;

	printf("Que año deseas comprobar?: ");
	scanf("%d", &year);

	p = year % 4;
	q = year % 100;
	r = year % 400;

	p2 = p == 0;
	q2 = q == 0;
	r2 = r == 0;

	if (p2 || (q2 && r2)) {
		printf("Es año biciesto\n");
	}


	return 0;
}
