#include <stdio.h>
#include <math.h>

int main() {
	// Variables
	double radios, area;

	// Operations
	scanf("%lf", &radios);
	area = pow(radios, 2) * M_PI;
	printf("%.9lf\n", area);

	return 0;
}
