#include <stdio.h>

int main () {
	double angle_01, angle_02, angle_03, angle_04, sum;

	printf("First angle: ");
	scanf("%lf", &angle_01);
	printf("Second angle: ");
	scanf("%lf", &angle_02);
	printf("Third angle ");
	scanf("%lf", &angle_03);
	printf("Fourth angle: ");
	scanf("%lf", &angle_04);

	sum = angle_01 + angle_02 + angle_03 + angle_04;
	if (sum == 360) {
		printf("Is a quadrilateral\n");
	} else {
		printf("Is not a quadrilateral\n");
	}

	return 0;
}
