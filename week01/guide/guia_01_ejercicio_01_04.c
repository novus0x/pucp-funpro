#include <stdio.h>

int main() {
	int numerador, denominador;
	int cociente, resto;

	printf("Escribe el numerador y denominador de la sgte forma numerador - denominador: ");
	scanf("%d %d", &numerador, &denominador);

	cociente = numerador / denominador;
	resto = numerador % denominador;
	
	printf("El cociente: %d, el resto: %d\n", cociente, resto);
	return 0;
}
