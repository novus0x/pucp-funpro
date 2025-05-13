#include <stdio.h>
#include <math.h>

int main() {
	// Variables
	double side, area;

	// Operations
	scanf("%lf", &side);
	area = pow(side, 2);
	printf("%.4lf\n", area);

	return 0;
}
