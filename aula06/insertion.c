/*
#include <stdio.h>

int main(void) {
    int x, y, t;
    int v[7] = {5, 7, 6, 4, 2, 3, 1}; // Declaração e inicialização do array

    // Algoritmo de ordenação (Bubble Sort) para colocar os elementos do array em ordem crescente
    for (x = 0; x < 6; x++) {
        for (y = x + 1; y < 7; y++) {
            // Compara o elemento atual com os proximos
            if (v[y] < v[x]) {
                // Troca os elementos de posição se estiverem fora de ordem
                t = v[x];
                v[x] = v[y];
                v[y] = t;
            }
        }
    }

    // Imprime o array ordenado
    for (x = 0; x < 7; x++) {
        printf("%i ", v[x]); // Imprime o elemento atual seguido de um espaço
        printf("\n\n\n");    // Imprime tres novas linhas
        getchar();           // Aguarda o usuario pressionar uma tecla antes de continuar
    }
    return 0;
}
*/
#include <stdio.h> // Adicionado o include para printf

// Função para trocar os valores de duas variaveis inteiras usando ponteiros
int swap(int *v1, int *v2) {
    int t = *v1;
    *v1 = *v2;
    *v2 = t;
    return 0; // Geralmente, funções swap void são mais comuns, mas mantendo o original
}

int main(void) {
    int x, y;
    int v[7] = {5, 7, 6, 4, 2, 3, 1}; // Declaração e inicialização do array

    // Algoritmo de ordenação (Bubble Sort)
    for (x = 0; x < 6; x++) {
        for (y = x + 1; y < 7; y++) {
            if (v[y] < v[x]) {
                swap(&v[x], &v[y]); // Chama a função swap para trocar os elementos
            }
        }
    }

    // Imprime o array ordenado
    for (x = 0; x < 7; x++) {
        printf("%i ", v[x]);
    }
    printf("\n\n\n"); // Imprime três novas linhas apos todos os números
    getchar();        // Aguarda o usuario pressionar uma tecla antes de terminar

    return 0; // Indica que o programa terminou com sucesso
}