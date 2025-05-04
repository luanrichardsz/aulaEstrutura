# Ponteiro
O Ponteiro ou Apontador, é uma variável que armazena endereços de memória.

## Exemplo:
````c
#include <stdio.h>

int main(){
	int valor = 100;
	int *ponteiro = &valor; // & = retorna o endereço de memoria de uma variavel
	
        printf("Valor: %d\n", valor);
        printf("Endereco de 'valor': %p\n", &valor); // %p = para imprimir so endereços de memoria
        printf("Valor via ponteiro: %d\n", *ponteiro); // Dereferenciação = acessar o valor armazenado no endereço de memória apontado por um ponteiro.
        printf("Endereco armazenado em ptr: %p\n", ponteiro); // %p = para imprimir so endereços de memoria

	return 0;
}
````

## Modificando o valor de X com ponteiro:
````c
#include <stdio.h>

int main(){
	int x = 5;
	int *ponteiro = &x;
	
	printf("Antes: x = %d\n", x);
	*ponteiro = 10; // Modifica o valor de X indiretamente
	printf("Depois: x = %d\n", x);
	
	return 0;
}
````

# Ponteiro com Vetor 

Um Ponteiro pode se comportar como um vetor, permitindo o acesso a dados
através da utilização de índices.

## Ponteiro acessando elementos de um vetor:
````c
#include <stdio.h>

int main(){
	int vetor [3] = {10, 20, 30};
	int *ponteiro = vetor; // Ponteiro vai indicar o primeiro elemento do vetor (vetor[0])

	printf("Primeiro elemento: %d\n", *ponteiro);
	printf("Segundo elemento: %d\n", *(ponteiro + 2));
	
	return 0;
}
````

## Percorrendo um vetor com ponteiro
````c
#include <stdio.h>

int main(){
	int vetor[] = {1, 2, 3, 4, 5};
	int *ponteiro = vetor;
	int tamanho = sizeof(vetor) / sizeof(vetor[0]);
	
	int i;
	
	for(i = 0; i < tamanho; i++){
		printf("Vetor[%d] = %d (Endereco: %p)\n", i, *(ponteiro + i), (ponteiro + i));
	}
	
	return 0;
}
````

## Ponteiro de Ponteiro
````c
#include <stdio.h>
int main()
{
int numero = 12, *ponteiro1, **ponteiro2, ***ponteiro3;
// **qtd = quantos "saltos" são necessários para acessar o valor final.
// ** = armazena o endereço de um ponteiro
// *** = armazena o endereço de um ponteiro para ponteiro

	ponteiro1 = &numero;
	ponteiro2 = &ponteiro1;
	ponteiro3 = &ponteiro2;

	printf("Valor de numero: %i\n", numero);
	printf("Valor de *ponteiro1: %i\n", *ponteiro1);
	printf("Valor de **ponteiro2: %i\n", **ponteiro2);
	printf("Valor de ***ponteiro3: %i\n", ***ponteiro3);
	getchar();

return 0;
}
````