#include <stdio.h>

int main() {
 	// Variables
  int money, _5, _2;

	// Operations
	printf("[!] Programa hecho para realizar cambio de monedas:\n");
	printf("[?] Ingrese el monto: ");
  scanf("%d", &money);

  _5 = money / 5;
  money -= 5 * _5;
  _2 = money / 2;
  money -= 2 * _2;
  
  printf("[+] El dinero se dara de la siguiente forma\n");
	printf("\tMonedas de 5: %d\n", _5);
	printf("\tMonedas de 2: %d\n", _2);
	printf("\tMonedas de 1: %d\n", money);

  return 0;
}
