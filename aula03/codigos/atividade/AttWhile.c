/* 
Desenvolva três programas capazes de receber diversos valores e, 
ao receber o valor 0, apresentar a média aritmética desses valores.
Obs. Cada programa deverá utilizar uma das estruturas for, while e do-while.
*/

#include <stdio.h>

int main(){
	//while
	int i = 1, numero, soma = 0;
	
	while(numero != 0){
		printf("Informe o valor %i : ", i);
		scanf("%i", &numero);
		soma += numero;
		i++;
	}
	
	printf("A soma dos valores: %i\n\n", soma);
	return 0;
}