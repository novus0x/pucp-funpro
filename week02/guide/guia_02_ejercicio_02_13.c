#include <stdio.h>
#include <math.h>

int main() {
  // Variables
  double x1, y1, x2, y2, a, b, c, aux1, aux2;

  // Operations
  printf("[!] Programa hecho para revisar la pertinencia de ambos puntos a una parabola:\n");
  printf("[?] Ingresar los coeficientes a, b y c: ");
  scanf("%lf %lf %lf", &a, &b, &c);
  printf("[?] Ingresar el primer punto (x, y): ");
  scanf("%lf %lf", &x1, &y1);
  printf("[?] Ingresar el segundo punto (x, y): ");
  scanf("%lf %lf", &x2, &y2);
  
  aux1 = a * pow(x1, 2) + b * x1 + c;
  aux2 = a * pow(x2, 2) + b * x2 + c;

  if (aux1 == y1 && aux2 == y2) printf("[+] Ambos puntos pertenecen a la parabola: 1\n");
  else printf("[+] Uno o ambos puntos no pertenecen a la parabola: 0\n");
  
  return 0;
}
