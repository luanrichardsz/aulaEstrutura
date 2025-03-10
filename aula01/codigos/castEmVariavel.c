#include <stdio.h>
// A conversão de tipos de variáveis, também chamada de cast de variáveis, tem a função de alterar o
// tipo de dados armazenados por uma variável.

int main(){
	int x = 100, y = 3;
	float z =  (float) x / y;
	
	printf("Valor de Z: %.2f\n", z);
	return 0;
}