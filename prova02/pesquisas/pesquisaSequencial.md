# Pesquisa Sequencial

Consiste na varredura sequencial dos dados e verificação da sua existência. Na pesquisa sequencial, os dados não necessitam, obrigatoriamente, de estarem classificados.

### Pesquisa Numérica
```c
#include <stdio.h> // Necessário para printf e scanf

// Pesquisa Numérica

// Função de busca sequencial
int buscaSequencial(int vetor[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            return i; // Retorna a posição (índice) onde o valor foi encontrado
        }
    }
    return -1; // Retorna -1 se o valor não for encontrado no vetor
}

int main(void) {
    int numeros[] = {10, 25, 30, 45, 50};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int valorBusca;

    printf("Digite o valor a ser procurado: ");
    scanf("%d", &valorBusca);

    int posicao = buscaSequencial(numeros, tamanho, valorBusca);

    if (posicao != -1) {
        printf("Valor %d encontrado na posicao %d.\n", valorBusca, posicao);
    } else {
        printf("Valor %d nao encontrado.\n", valorBusca);
    }

    return 0;
}
```

### Pesquisa Alfanumérica
```c
#include <stdio.h>  // Necessário para printf e scanf
#include <string.h> // Necessário para strcmp

// Pesquisa Alfanumérica

// Função de busca sequencial para strings
int buscaSequencial(char vetor[][20], int tamanho, char valor[]) {
    for (int i = 0; i < tamanho; i++) {
        // Compara a string na posição atual do vetor com o valor procurado
        if (strcmp(vetor[i], valor) == 0) {
            return i; // Retorna a posição (índice) onde a string foi encontrada
        }
    }
    return -1; // Retorna -1 se a string não for encontrada
}

int main(void) {
    char nomes[][20] = {"Ana", "Carlos", "Beatriz", "Joao", "Maria"};
    int tamanho = sizeof(nomes) / sizeof(nomes[0]); // Calcula o número de strings no array
    char nomeBusca[20];

    printf("Digite o nome a ser procurado: ");
    // Cuidado: scanf("%s", nomeBusca) é vulnerável a buffer overflow.
    // Para maior segurança, considere fgets ou scanf com limite de largura, ex: scanf("%19s", nomeBusca);
    scanf("%s", nomeBusca);

    int posicao = buscaSequencial(nomes, tamanho, nomeBusca);

    if (posicao != -1) {
        printf("Nome \"%s\" encontrado na posicao %d.\n", nomeBusca, posicao);
    } else {
        printf("Nome \"%s\" nao encontrado.\n", nomeBusca);
    }

    return 0;
}
```