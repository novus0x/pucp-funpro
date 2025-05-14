#include <stdio.h>
#include <math.h>

int main() {
	// Variables
	int a, b, c, ident1, ident2, ident3;

	// Operations
	printf("Ingresar valores a, b y c: ");
	scanf("%d %d %d", &a, &b, &c);

	ident1 = pow(a, 3) + pow(b, 3) + pow(c, 3) - 3 * a * b * c;
	ident2 = (a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2) - (a * b) - (b * c) - (a * c));
	ident3 = ((a + b + c) * (pow(a - b, 2) + pow(b - c, 2) + pow(c - a, 2))) / 2;

	printf("La identidad 1 tiene como valor: %d\n", ident1);
	printf("La identidad 2 tiene como valor: %d\n", ident2);
	printf("La identidad 3 tiene como valor: %d\n", ident3);
	printf("Las identidades son iguales: %d\n", ident1 == ident2 && ident1 == ident3);	

	return 0;
}
