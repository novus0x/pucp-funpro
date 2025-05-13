#include <stdio.h>

int main() {
	char genero, name[20];
	int suma;
	double nota_1, nota_2, nota_3, nota_4, promedio;
	
	printf("Cual es tu genero? [M/F]");
	scanf("%c", &genero);
	printf("Cual es tu nombre? ");
	scanf("%s", &name);
	printf("Ingresa tus ultimas 4 notas de la sgte manera: nota_1 nota_2 nota_3 nota_4\n");
	scanf("%lf %lf %lf %lf", &nota_1, &nota_2, &nota_3, &nota_4);
	
	suma = nota_1 + nota_2 + nota_3 + nota_4;
	promedio = suma / 4;

	printf("Hola %s tu genero es %c\n", name, genero);
	printf("El promedio de tus notas es: %lf\n", promedio);

	return 0;
}
