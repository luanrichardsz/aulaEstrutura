#include <stdio.h>
#include <locale.h> // Configuração de localidade (acentuação, formatos regionais)
#define COMISSAO 0.3

int main(){
	setlocale(LC_ALL,"portuguese");
	double venda;
	printf("Digite o valor da venda: ");
	scanf("%lf", &venda);
	printf("Comissão = %.2lf \n", venda * COMISSAO);
	return 0;
}