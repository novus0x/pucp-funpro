#include <stdio.h>
#include <string.h> 

// Functions declarations
char ces_encrypt(char text[200]);

int main() {
	// Variables
	char user_input[250];
	
	// Operations
	printf("[!] Cadena de texto a encryptar (evita los espacios porfa :3): ");
	fgets(user_input, sizeof(user_input), stdin);
	user_input[strcspn(user_input, "\n")] = '\0';
	ces_encrypt(user_input);
	return 0;
}

// Functions
char ces_encrypt(char text[200]) {
	// Definitions
	char hash[82] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ";
	int len, i, num, max_hash;
	char *j, encrypted[250];

	// Operations
	len = strlen(text);
	max_hash = strlen(hash);
	for (i = 0; i < len; i++) {
		j = strchr(hash, text[i]);
		num = j - hash + 3;
		
		if (num >= max_hash) {
			encrypted[i] = hash[num - max_hash];
		} else {
			encrypted[i] = hash[num];
		}
	}
	printf("[+] Texto excryptado: %s\n", encrypted);

	return 'c';
}
