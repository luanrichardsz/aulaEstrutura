#include <stdio.h>
#include <locale.h> // Configura��o de localidade (acentua��o, formatos regionais)

int x = 10;

int f1(int y){
	x = x * 5;
	printf("Valor de x na fun��o: %i \n\n",x);
	return y * 2;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("Valor de x fora da fun��o: %i \n", f1(x));
	return 0;
}