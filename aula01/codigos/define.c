#include <stdio.h>
#include <locale.h> // Configura��o de localidade (acentua��o, formatos regionais)
#define COMISSAO 0.3

int main(){
	setlocale(LC_ALL,"portuguese");
	double venda;
	printf("Digite o valor da venda: ");
	scanf("%lf", &venda);
	printf("Comiss�o = %.2lf \n", venda * COMISSAO);
	return 0;
}