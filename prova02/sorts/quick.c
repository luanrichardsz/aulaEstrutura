#include <stdio.h>  // Necessário para printf
#include <stdlib.h> // Necessário para system("pause")

// Função Quicksort
void quick(int v[], int esq, int dir) {
    int pivo = esq; // O pivô inicial é o primeiro elemento da sub-array
    int i, ch, j;

    // Este loop percorre a sub-array a partir do segundo elemento (esq + 1)
    for (i = esq + 1; i <= dir; i++) {
        j = i;
        // Se o elemento atual v[j] é menor que o elemento na posição do pivô v[pivo]
        if (v[j] < v[pivo]) {
            ch = v[j]; // Armazena o elemento v[j] que será movido

            // Move todos os elementos entre o pivô e j-1 uma posição para a direita
            // para abrir espaço para ch
            while (j > pivo) {
                v[j] = v[j - 1];
                j--;
            }
            v[j] = ch; // Coloca ch na posição correta (logo após o antigo v[pivo-1] ou na posição do pivô)
            pivo++;    // Incrementa a posição do pivô, pois um elemento menor foi colocado antes dele
        }
    }

    // Chamadas recursivas para as sub-arrays à esquerda e à direita do pivô final
    // A posição 'pivo' agora contém o elemento que estava originalmente em 'esq'
    // e todos os elementos à sua esquerda são menores, e à sua direita (neste ponto da partição) são maiores ou não processados.
    // Esta implementação de partição é uma variante; o 'pivo' aqui rastreia a posição final do elemento que era v[esq].

    if (pivo - 1 >= esq) { // Se houver elementos à esquerda do pivô
        quick(v, esq, pivo - 1);
    }
    if (pivo + 1 <= dir) { // Se houver elementos à direita do pivô
        quick(v, pivo + 1, dir);
    }
}

int main(void) { // Alterado para int main(void) para melhor conformidade
    int x;
    int v[7] = {5, 7, 6, 4, 2, 3, 1}; // Declaração e inicialização do array

    quick(v, 0, 6); // Chama a função quicksort para ordenar o array completo (índices 0 a 6)

    // Imprime o array ordenado
    for (x = 0; x < 7; x++) {
        printf("%d ", v[x]);
    }
    printf("\n");        // Imprime uma nova linha no final
    system("pause");     // Pausa a execução (comum em ambientes Windows)
    return 0;            // Indica que o programa terminou com sucesso
}