#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int numero;
	
	printf("Informe um n�mero entre 1 e 3: ");
	scanf("%d", &numero);
	
	switch(numero)
	{
	case 1:
		printf("Voc� digitou o n�mero 1");
		break;
	case 2:
		printf("Voc� digitou o n�mero 2");
		break;
	case 3:
		printf("Voc� digitou o n�mero 3");
		break;	
	default:
		printf("Voc� digitou um n�mero invalido!");
		break;
	}
	
	getchar();
	return 0;
}