#include <stdio.h>

int main() {
	char name[20] = {};
	int student_code;
	printf("Cual es tu nombre? ");
	scanf("%s", &name);
	printf("Cual es tu código de alumno? ");
	scanf("%d", &student_code);

	printf("Bienvenido al curso de Fundamentos de Programación %s con el código %d\n", name, student_code);

	return 0;
}
