#include <stdio.h>
#include <math.h>

int main() {
	// Variables
	double a, b, c, d, area, x, y, z, k;

	// Operations
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	x = (a + b) / 2;
	k = (pow(c, 2) - pow(d, 2) + pow(a - b, 2)) / (2 * (a - b));
	y = pow(c, 2);
	z = pow(k, 2);
	area = x * sqrt(y - z);
	printf("%.6lf\n", area);

	return 0;
}
