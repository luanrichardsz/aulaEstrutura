#include <stdio.h>

int main (void) {
	
	int x = 10, y = 5, z;
	printf("X = %d\n\n", x);
	// ++x incrementa o valor de x em 1, antes mesmo de completar a equação.
	z = ++x + y;
	printf("Y = %d\n\n", y);
	printf("Z = %d\n\n", z);
	printf("X = %d\n\n", x);
	getchar();
	
	return 0;
}