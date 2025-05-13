#include <stdio.h>
#include <math.h>

// Calculate area
double triangle_area(int, int, int, int, int, int);

// Main
int main() {
	// Variables
	int x1, x2, x3, x4, x5, y1, y2, y3, y4, y5;
	double sum = 0;

	// Operations
	printf("Ingrese las coordenadas de los puntos del poligono convexo:\n");
	scanf("%d %d %d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4, &x5, &y5);
	sum += triangle_area(x1, y1, x2, y2, x5, y5);
	sum += triangle_area(x2, y2, x4, y4, x5, y5);
	sum += triangle_area(x2, y2, x3, y3, x4, y4);
	printf("El area del poligono convexo es: %.2lf\n", sum);
	return 0;
}

// Functions
double triangle_area(int x1, int y1, int x2, int y2, int x3, int y3) {
	// Variables
	double a, b, c, s, aux1, aux2;

	// Operations
	aux1 = pow(x2 - x1, 2) + pow(y2 - y1, 2);
	a = sqrt(aux1);
	aux1 = pow(x3 - x2, 2) + pow(y3 - y2, 2);
	b = sqrt(aux1);
	aux1 = pow(x1 - x3, 2) + pow(y1 - y3, 2);
	c = sqrt(aux1);
	
	s = (a + b + c) / 2;

	return sqrt(s * (s - a) * (s - b) * (s - c));
}
