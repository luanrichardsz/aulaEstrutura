// RECEBER O SEXO (M OU F) E O TEMPO DE TRABALHO
// SEXO = 'M' e TEMPO >=35 = APOSENTADO
// SEXO = 'F' e TEMPO >=25 = APOSENTADO

#include <locale.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL,"portuguese"); // Setando a linguagem brasileira
	
	char sexo;
	int tempoTrabalhado;
	
	printf("Informe seu sexo (M para masculino ou F para feminino): ");
	scanf("%c", &sexo);
	sexo = tolower(sexo);
	
	printf("Informe seu tempo de trabalho: ");
	scanf("%i", &tempoTrabalhado);	
	
	if ( sexo == 'm' && tempoTrabalhado >= 35 ){
		printf("Parabens cabra macho! Estas aposentado. \n");
	} else if ( sexo == 'f' && tempoTrabalhado >= 25){
		printf("Parabens moça bonita! Estas aposentada. \n");
	} else {
		printf("Ainda vai ter que trabalhar.");
	}
}