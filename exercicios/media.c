// Receber duas notas

// Calcular a media artitmetica

//Escrever situa��o do aluno

#include <locale.h>
#include <stdio.h>

int main(){
	setlocale(LC_ALL,"portuguese"); // Setando a linguagem brasileira
	
	float nota1, nota2, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	if(media >= 7){
		printf("Parabens! Voc� foi aprovado. \n");
	} else if (media >= 5){
		printf("Voc� esta de recupera��o. \n");
	} else {
		printf("Reprovado. \n");
	}
	
	return 0;
}