#include <stdio.h>

int main(){
	int i, numero=0, soma=0;
	for(i = 1; i <= 5; i++){
		printf("Informe o valor %i: ", i);
		scanf("%i", &numero);
		soma += numero;
	} 
	printf("\nSoma dos valores: %i\n\n", soma);
	return 0;
}