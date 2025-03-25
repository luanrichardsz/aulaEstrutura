#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int numero;
	
	printf("Informe um número entre 1 e 3: ");
	scanf("%d", &numero);
	
	switch(numero)
	{
	case 1:
		printf("Você digitou o número 1");
		break;
	case 2:
		printf("Você digitou o número 2");
		break;
	case 3:
		printf("Você digitou o número 3");
		break;	
	default:
		printf("Você digitou um número invalido!");
		break;
	}
	
	getchar();
	return 0;
}