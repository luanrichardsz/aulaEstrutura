/* 
Desenvolva tr�s programas capazes de receber diversos valores e, 
ao receber o valor 0, apresentar a m�dia aritm�tica desses valores.
Obs. Cada programa dever� utilizar uma das estruturas for, while e do-while.
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