#include <stdio.h>  // Necessário para printf
#include <stdlib.h> // Necessário para system("pause")

int main(void) {
    int x, y, t;
    int v[7] = {5, 7, 6, 4, 2, 3, 1}; // Declaração e inicialização do array

    // Algoritmo de ordenação (Bubble Sort - otimizado para levar os maiores para o final)
    // O loop externo 'x' diminui, pois a cada passada o maior elemento da porção não ordenada
    // "flutua" para sua posição correta no final.
    for (x = 6; x > 0; x--) { // Itera do penúltimo índice até o primeiro
        // O loop interno 'y' percorre a porção não ordenada do array.
        // A cada iteração de 'x', a porção a ser verificada diminui, pois os elementos
        // maiores já estão em suas posições finais.
        for (y = 0; y < x; y++) { // Itera do início até 'x-1'
            // Compara elementos adjacentes
            if (v[y] > v[y + 1]) { // Se o elemento atual é maior que o próximo
                // Troca os elementos de posição
                t = v[y];
                v[y] = v[y + 1];
                v[y + 1] = t;
            }
        }
    } // Fim do loop de ordenação

    // Imprime o array ordenado
    for (x = 0; x < 7; x++) {
        printf("%i ", v[x]);
    }
    printf("\n\n\n");    // Imprime três novas linhas após todos os números
    system("pause"); // Pausa a execução (comum em ambientes Windows para ver a saída)
    return 0;        // Indica que o programa terminou com sucesso
}

/*
#include <stdio.h>  // Necessário para printf
#include <stdlib.h> // Necessário para system("pause")

// Função para trocar os valores de duas variáveis inteiras usando ponteiros
int swap(int *v1, int *v2) {
    int t = *v1;
    *v1 = *v2;
    *v2 = t;
    return 0; // A função swap não precisa retornar um valor; void seria mais comum.
}

int main(void) {
    int x, y; // A variável 't' foi removida de main, pois não é usada aqui
    int v[7] = {5, 7, 6, 4, 2, 3, 1}; // Declaração e inicialização do array

    // Algoritmo de ordenação (Bubble Sort - otimizado para levar os maiores para o final)
    // O loop externo 'x' diminui, pois a cada passada o maior elemento da porção não ordenada
    // "flutua" para sua posição correta no final.
    for (x = 6; x > 0; x--) { // Itera do penúltimo índice (considerando o limite superior da comparação) até o primeiro
        // O loop interno 'y' percorre a porção não ordenada do array.
        // A cada iteração de 'x', a porção a ser verificada diminui.
        for (y = 0; y < x; y++) { // Itera do início até 'x-1'
            // Compara elementos adjacentes
            if (v[y] > v[y + 1]) { // Se o elemento atual é maior que o próximo
                swap(&v[y], &v[y + 1]); // Chama a função swap para trocar os elementos
            }
        }
    } // Fim do loop de ordenação

    // Imprime o array ordenado
    for (x = 0; x < 7; x++) {
        printf("%i ", v[x]);
    }
    printf("\n\n\n");    // Imprime três novas linhas após todos os números
    system("pause"); // Pausa a execução (comum em ambientes Windows para ver a saída)
    return 0;        // Indica que o programa terminou com sucesso
}
*/