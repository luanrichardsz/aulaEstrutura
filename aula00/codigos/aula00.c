#include <stdio.h>  // Entrada e sa�da padr�o (printf, scanf, etc.)
#include <locale.h> // Configura��o de localidade (acentua��o, formatos regionais)

main(int argc, char** argv)
{
	setlocale(LC_ALL,"portuguese"); // Setando a linguagem brasileira
	//printf("Ol� Mundo!");
	
	//printf("Sou aluno chamado %s e moro em %s", "Luan", "Recife.");
	
	/*
	printf("Linguagem C \n\n");
	printf("A principal linguagem \n");
	return 0;
	*/
	
	//getchar(); // Scanner para pegar o primeiro caractere	
	
	/*
	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero); // pegando o numero com scanner
	return numero; 
	*/
	
	/*
	int ano;
	printf("Que ano voc� nasceu? ");
	scanf("%d", &ano);
	fflush(stdin); //limpa o buffer de entrada
	printf("Voc� tem %d anos.", (2025-ano));
	getchar(); 
	return 0;
	*/
	
	/*
	char name[20]; // array de 20 posi��es
	printf("What's your name? ");
	scanf("%20[^\n]", &name); //Colocando que vou receber uma string de 20 caracteres
	fflush(stdin);
	printf("Nice to meet you, %s!\n", name);
	getchar();
	return 0;
	*/
	
	char name[12];
	printf("Qual o seu nome? ");
	fgets(name, 12, stdin);
	fflush(stdin);
	printf("Muito prazer %s!", name);
	getchar();
	return 0;
}