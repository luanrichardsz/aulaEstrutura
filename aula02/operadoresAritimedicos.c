#include <stdio.h>	// Biblioteca padr�o para comandos i/o	 
#include <math.h>	// Necessario para o "fmod"
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese"); // Setando a linguagem brasileira
	
	int a = 10, b = 3;
	float c = 10, d = 3.0;
	
	printf(" (Multiplica��o) => %d * %d = %d \n \n", a,b, a * b);
	printf(" (Divis�o) => %d / %d = %d \n \n", a,b, a / b);
	printf(" (Adi��o) => %d * %d = %d \n \n", a,b, a + b);
	printf(" (Subtra��o) => %d - %d = %d \n \n", a,b, a - b);
	printf(" (Resto) => %d %% %d = %d \n \n", a,b, a % b);
	// fmod = Extrai o resto da divis�o entre reais (double/float) 
	printf(" (Resto com Reais) => fmod(%.1f, %.1f) = %.1f \n \n", c, d, fmod(c,d));
	// pow = Calcular Potencia
	printf(" (Potencia��o) => pow(%d,2) = %.f\n \n", a, pow(a,2));
	
	return 0;
}