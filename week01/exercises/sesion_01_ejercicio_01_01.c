#include <stdio.h>
#include <math.h>

// Functions declaration
void is_prime(int a);

// Main function
int main () {
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	is_prime(number);
	return 0;
}

void is_prime(int number) {
	int result, i;
	result = 0;
	double limit = sqrt(number);

	for (i = 2; i <= limit; i++) {
		if (number % i == 0) {
			result++;
		}		
	}

	if (result == 0) {
		printf("The number %d is a prime number\n", number);
	} else {
		printf("The number %d is not a prime number\n", number);
	}
}
