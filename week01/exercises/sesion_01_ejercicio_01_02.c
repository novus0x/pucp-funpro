#include <stdio.h>

int main() {
	int number;

	printf("Enter the ph value: ");
	scanf("%d", &number);
	
	if (number < 7) {
		printf("The hydrogen level indicate that the solution is acid\n");
	} else if (number == 7) {
		printf("The hydrogen level indicate that the solution is neutral\n");
	} else {
		printf("The hydrogen level indicate that the solution is alkaline\n");
	}

	return 0;
}
