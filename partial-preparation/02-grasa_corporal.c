#include <stdio.h>
#include <math.h>

// Protipos de funciones
int validar_datos(int, int, int, char);
void calcular_imc_porcentaje(double, double, double, double *, double *);

double calcular_siri(double, double, double *);

// Main function
int main() {
	// Variables
	char opcion, opcion2;
	double peso, altura, edad, imc, porcentaje, volumen, densidad;

	// Obtener datos del usuario
	printf("Ingrese su peso (en kilogramos), talla (en metros) y edad: ");
	scanf("%lf %lf %lf", &peso, &altura, &edad);
	printf("Ingrese (S, si: si es atleta) (N, n: en caso no lo sea): ");
	scanf("\n%c", &opcion);
	if(!validar_datos(peso, altura, edad, opcion)) { // Validar datos
		printf("Alguno de los valores ingresados es incorrecto\n");
		return 0;
	}
	calcular_imc_porcentaje(peso, altura, edad, &imc, &porcentaje); // Calcular el IMC y porcentaje de grasa
	printf("Su indice de masa corporal es %.6lf\n", imc);
	printf("Su porcentaje de grasa corportal es %.6lf\n", porcentaje);
	if (opcion == 'S') {
		if (porcentaje <= 11) printf("El porcentaje de grasa es el ideal para un hombre que es atleta\n");
		else printf("El porcentaje de grasa no es el ideal para un hombre que es atleta\n");
	} else {
		if ((edad > 20 && porcentaje <= 11) || (edad > 30 && porcentaje <= 12)) printf("El porcentaje de grasa corporal no es el ideal para un hombre que no es atleta\n"); // Nivel bajo
		else if ((edad > 20 && porcentaje <= 13) || (edad > 30 && porcentaje <= 14)) printf("El porcentaje de grasa corporal es bueno para un hombre que no es atleta\n"); // Nivel Bueno
		else if ((edad > 20 && porcentaje <= 20) || (edad > 30 && porcentaje <= 21)) printf("El porcentaje de grasa corporal es normal para un hombre que no es atleta\n"); // Nivel Normal
		else printf("El porcentaje de grasa corporal es elevado para un hombre que no es atleta\n"); // Nivel elevado
	}
	printf("Si desea calcular el porcentaje de grasa corporal usando la formula de Siri ingrese S o s: ");
	scanf("\n%c", &opcion2);
	if (opcion2 != 'S' && opcion2 != 's') {
		printf("No se solicito calcular el porcentaje de grasa corporal usando la forumula Siri\n");
		return 0;
	}
	printf("Ingrese su volumen corporal (litros): ");
	scanf("\n%lf", &volumen);
	porcentaje = calcular_siri(peso, volumen, &densidad);
	printf("Densidad: %.6lf\n", densidad);
	printf("Su porcentaje de grasa corporal usando la formular Siri es: %.6lf\n", porcentaje);

	return 0;
}

// Definicion funciones
int validar_datos(int peso, int altura, int edad, char opcion) {
	if (peso <= 0 || altura <= 0 || edad < 20 || edad > 39) return 0; // Datos invalidos
	if (opcion != 'S' && opcion != 'N') return 0; // Opcion invalida
	return 1;
}

void calcular_imc_porcentaje(double peso, double altura, double edad, double *imc, double *porcentaje) {
	*imc = peso / pow(altura, 2);
	*porcentaje = 1.2 * *imc + 0.23 * edad - 10.8 - 5.4;
}

double calcular_siri(double peso, double volumen, double *densidad) {
	*densidad = peso / volumen;
	return ((4.95 / *densidad) - 4.5) * (double)100;
}
