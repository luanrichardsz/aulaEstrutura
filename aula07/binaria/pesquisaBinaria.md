# Binaria
Consiste na divisão em duas partes de uma sequência de dados
ordenados. Depois é feita uma comparação com o dado mais central.
Se o dado procurado for maior, repete o processo com os dados da
direita, se for menor, com os dados da esquerda.

## Pesquisa Numérica
```c
#include <stdio.h> // Pesquisa Numérica

// Função de busca binária
int buscaBinaria(int vetor[], int tamanho, int valor) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2; // Evita overflow para grandes 'inicio' e 'fim'

        if (vetor[meio] == valor) {
            return meio; // Encontrou
        } else if (valor < vetor[meio]) {
            fim = meio - 1; // Busca na metade esquerda
        } else {
            inicio = meio + 1; // Busca na metade direita
        }
    }
    return -1; // Não encontrou
}

int main() {
    int numeros[] = {5, 10, 15, 20, 25, 30, 35}; // Vetor ORDENADO
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int valorBusca;

    printf("Digite o valor a ser procurado: ");
    scanf("%d", &valorBusca);

    int posicao = buscaBinaria(numeros, tamanho, valorBusca);

    if (posicao != -1) {
        printf("Valor %d encontrado na posicao %d.\n", valorBusca, posicao);
    } else {
        printf("Valor %d nao encontrado.\n", valorBusca);
    }

    return 0;
}
```

## Pesquisa Alfanumérica
```c
#include <stdio.h>  // Para printf, scanf
#include <string.h> // Para strcmp

// Função de busca binária para strings (alfanumérica)
int buscaBinaria(char vetor[][20], int tamanho, char valor[]) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2; // Evita overflow para grandes 'inicio' e 'fim'
        int comparacao = strcmp(valor, vetor[meio]);

        if (comparacao == 0) {
            return meio; // Encontrou
        } else if (comparacao < 0) {
            fim = meio - 1; // O valor procurado está antes (na metade esquerda)
        } else {
            inicio = meio + 1; // O valor procurado está depois (na metade direita)
        }
    }
    return -1; // Não encontrou
}

int main() {
    char nomes[][20] = {"Ana", "Beatriz", "Carlos", "Joao", "Maria", "Rafael", "Zelia"}; // Vetor de strings ORDENADO
    int tamanho = sizeof(nomes) / sizeof(nomes[0]);
    char nomeBusca[20];

    printf("Digite o nome a ser procurado: ");
    scanf("%19s", nomeBusca); // Usar %19s para evitar buffer overflow com scanf

    int posicao = buscaBinaria(nomes, tamanho, nomeBusca);

    if (posicao != -1) {
        printf("Nome \"%s\" encontrado na posicao %d.\n", nomeBusca, posicao);
    } else {
        printf("Nome \"%s\" nao encontrado.\n", nomeBusca);
    }

    return 0;
}
```