#include <stdio.h>
// A convers�o de tipos de vari�veis, tamb�m chamada de cast de vari�veis, tem a fun��o de alterar o
// tipo de dados armazenados por uma vari�vel.

int main(){
	int x = 100, y = 3;
	float z =  (float) x / y;
	
	printf("Valor de Z: %.2f\n", z);
	return 0;
}