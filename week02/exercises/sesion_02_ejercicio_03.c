#include <stdio.h>
#include <math.h>

int main() {
	// Variables
	int side1, side2, side3;
	double s, area;

	// Operations
	scanf("%d %d %d", &side1, &side2, &side3);
	s = (side1 + side2 + side3) / 2;
	area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	printf("%lf\n", area);

	return 0;
}
