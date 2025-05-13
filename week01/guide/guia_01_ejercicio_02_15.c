#include <stdio.h>

int main() {
	// Variables
	int num1, num2, den1, den2, num_sum, den_sum;

	// Operations
	printf("[!] Programa desarrollado para la suma de fracciones\n");
	printf("[?] Escribe el numerador 1 y denominador 1 de la sgte forma --> a/b: ");
	scanf("%d/%d", &num1, &den1);
	printf("[?] Escribe el numerador 2 y denominador 2: ");
	scanf("%d/%d", &num2, &den2);
	
	if (den1 == den2) {
		num_sum = num1 + num2;
		den_sum = den1;	
	} else {
		num_sum = num1 * den2 + num2 * den1;
		den_sum = den1 * den2;
	}

	printf("[+] El resultado final es %d/%d\n", num_sum, den_sum);

	return 0;
}
