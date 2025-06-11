#include <stdio.h>

int main() {
  // Variables
  double x1, y1, x2, y2, m, b;

  // Operations
  printf("[!] Programa hecho para hallar la ecuacion de una recta:\n");
  printf("[?] Ingresar el primer punto (x, y): ");
  scanf("%lf %lf", &x1, &y1);
  printf("[?] Ingresar el segundo punto (x, y): ");
  scanf("%lf %lf", &x2, &y2);

  m = (y2 - y1) / (x2 - x1); // Hallar la pendiente
  b = y1 - m * x1; // Hallar la constante

  printf("[+] La recta es: y = %.6lfx + %.6lf\n", m, b);

  return 0;
}
