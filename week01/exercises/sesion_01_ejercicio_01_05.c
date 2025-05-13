#include <stdio.h>

int main () {
	int quantity_faces, quantity_edges, quantity_vertices, operation;

	printf("Faces quantity: ");
	scanf("%d", &quantity_faces);
	printf("Edges quantity: ");
	scanf("%d", &quantity_edges);
	printf("Vertices quantity: ");
	scanf("%d", &quantity_vertices);

	operation = quantity_faces - quantity_edges + quantity_vertices;

	if (operation != 2) {
		printf("It does not comply with Euler's theorem\n");
	} else {
		printf("Complies with Euler's theorem\n");
	}

	return 0;
}
