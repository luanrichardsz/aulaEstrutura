#include <stdio.h>

// ponteiro = variavel que armazena endere�os de memoria

int main (void){
	int x = 10;
	int *ponteiro;	
	ponteiro = &x; // mandando o endere�o de x para o ponteiro
	int y = 20; 
	*ponteiro = y; // o que ta dentro do ponteiro virou Y que � X
	
	printf("X: %d\nY: %d", x, y);
	
	getchar();
	return 0;
}