#include <stdio.h>

int main() {
	// Variables
	int money, _50, _20, _10;

	// Operations
	printf("[!] Programa hecho para obtener el cambio de billetes\n");
	printf("[?] Cuanto dinero va a retirar: ");
	scanf("%d", &money);

	_50 = money / 50; // Cuantos billetes de 50
	money -= _50 * 50; // Restarle al dinero inicial 50 * cantidad50
	_20 = money / 20; // Cuantos billetes de 20
	money -= _20 * 20; // Restarle al dinero 20 * cantidad20
	_10 = money / 10; // Cuantos billetes de 10
	money -= _10 * 10; // Restarle al dinero 10 * cantidad10 y quedarnos con el resto

	printf("[+] El dinero se dara de la siguiente forma\n");
	printf("\tBilletes de 50: %d\n", _50);
	printf("\tBilletes de 20: %d\n", _20);
	printf("\tBilletes de 10: %d\n", _10);
	printf("\tMonedas: %d\n", money);

	return 0;
}
