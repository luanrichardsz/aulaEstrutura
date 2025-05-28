#include <stdio.h>

int main(void) {
    int x, y, t;
    int v[7] = {5, 7, 6, 4, 2, 3, 1}; // Declaração e inicialização do array

    // Algoritmo de ordenação (Selection Sort) para colocar os elementos do array em ordem crescente
    for (x = 0; x < 6; x++) { // Loop para percorrer cada posição do array que receberá o menor elemento da vez
        // O loop interno (y) busca o menor elemento a partir da posição x+1
        // e o compara com o elemento na posição x. Se um menor é encontrado,
        // a troca é feita para que v[x] sempre contenha o menor elemento encontrado até então na varredura.
        for (y = x + 1; y < 7; y++) {
            // Compara o elemento na posição 'y' com o elemento na posição 'x'
            if (v[y] < v[x]) {
                // Troca os elementos de posição se o elemento em v[y] for menor que v[x]
                t = v[x];
                v[x] = v[y];
                v[y] = t;
            }
        }
    }

    // Imprime o array ordenado
    for (x = 0; x < 7; x++) {
        printf("%i ", v[x]); // Imprime o elemento atual seguido de um espaço
        printf("\n\n\n");    // Imprime três novas linhas
        getchar();           // Aguarda o usuário pressionar uma tecla antes de continuar
    }
    return 0;
}

/*
#include <stdio.h>

// Função para trocar os valores de duas variáveis inteiras usando ponteiros
int swap(int *v1, int *v2) {
    int t = *v1;
    *v1 = *v2;
    *v2 = t;
    return 0; // Geralmente, funções swap void são mais comuns, mas mantendo o original
}

int main(void) {
    int x, y;
    int v[7] = {5, 7, 6, 4, 2, 3, 1}; // Declaração e inicialização do array

    // Algoritmo de ordenação (Selection Sort)
    for (x = 0; x < 6; x++) { // Loop para percorrer cada posição do array que receberá o menor elemento da vez
        // O loop interno (y) busca o menor elemento a partir da posição x+1
        // e o compara com o elemento na posição x. Se um menor é encontrado,
        // a troca é feita para que v[x] sempre contenha o menor elemento encontrado até então na varredura.
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
    printf("\n\n\n"); // Imprime três novas linhas após todos os números
    getchar();        // Aguarda o usuário pressionar uma tecla antes de terminar

    return 0; // Indica que o programa terminou com sucesso
}
*/