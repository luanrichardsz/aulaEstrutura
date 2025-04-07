#include <stdio.h>

// ponteiro = variavel que armazena endereços de memoria

int main (void){
	int x = 10;
	int *ponteiro;	
	ponteiro = &x; // mandando o endereço de x para o ponteiro
	int y = 20; 
	*ponteiro = y; // o que ta dentro do ponteiro virou Y que é X
	
	printf("X: %d\nY: %d", x, y);
	
	getchar();
	return 0;
}