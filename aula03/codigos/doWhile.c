#include <stdio.h>

int main(){
	int i=1, numero=0, soma=0;
	
	do{
		printf("Informe o valor %i : ", i);
		scanf("%i", &numero);
		soma += numero;
		i++;
	}
	while (i < 6);
	
	printf("\nSoma dos valores : %i\n\n", soma);
	return 0;
}