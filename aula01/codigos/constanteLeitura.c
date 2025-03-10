#include <stdio.h>

int main(){
	const int x = 10;
//	x = x + 90; //essa linha que da o erro pos, é uma costante, somente leitura 
	printf("Valor de x: %i \n", x);
	return 0;
}