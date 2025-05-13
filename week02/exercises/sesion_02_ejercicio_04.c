#include <stdio.h>

int main() {
	// Variables
	int cel;
	double fah;

	// Operations
	scanf("%d", &cel);
	fah = ((double)cel * 9/5) + 32;
	printf("%.1lf\n", fah);

	return 0;
}
