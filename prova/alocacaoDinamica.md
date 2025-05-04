~~# Alocação Dinâmica 

## De Listas
O espaço de memória é alocado em tempo de execução. Aumenta ou diminui seu
tamanho a medida que são adicionados novos elementos e diminui quando são
removidos. São implementadas com a utilização de ponteiros.

### Funções
São funções contidas na biblioteca stdlib, utilizadas no processo de alocação
dinâmica de memória. 

São elas:
#### sizeof(variável ou tipo)
- É uma função capaz de identificar a quantidade de bytes consumidos por uma determinada variável

Codigo:
````c
#include <stdio.h>
#include <stdlib.h>

struct ponto
{
    int x,y;
};

int main(void)
{
    int v[10];
    printf("short : %i\n", sizeof(short));
    printf("int : %i\n", sizeof(int));
    printf("float : %i\n", sizeof(float));
    printf("double : %i\n", sizeof(double));
    printf("int v[10] : %i\n", sizeof(v));
    printf("struct ponto: %i\n", sizeof(struct ponto));
    system("pause");
    return 0;
}

````
#### malloc(Tamanho)
- É uma função capaz de alocar espaço de memória em bytes. Recebe como parâmetro, o tamanho em bytes a serem reservados na memória. A devolução de malloc é do tipo void necessitando de uma conversão (CAST) antes da atribuição. O espaço de memória alocado não é inicializado.
- O nome malloc é um acrônimo de memory allocation.

Codigo:
````c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p;
    p = (int *) malloc(5 * sizeof(int));
    
    if (p == NULL){
        printf("Erro: Sem memoria!\n");
        exit(1);
    }
    int i;
    for (i=0; i<5; i++){
        printf("p[%d]=%d\n",i,p[i]);
    }
    
    getchar();
    return 0;
}

````

#### calloc(Qtd, Tamanho)
- É uma função capaz de alocar espaço de memória em bytes. Recebe dois parâmetros: Qtd-Quantidade de blocos; Tamanho-Quantidade de bytes de cada bloco de memória a ser reservado. Diferente da função malloc, inicializa as variáveis com zero. A devolução de calloc é do tipo void necessitando de uma conversão (CAST) antes da atribuição.~~

````c
#include <stdio.h>
int main(void)
{
    int *p;
    p = (int *) calloc(5, sizeof(int));
    
    if (p == NULL){
        printf("Erro: Sem memoria!\n");
        exit(1);
    }
    
    int i;
    for (i=0; i<5; i++){
        printf("p[%d]=%d\n",i,p[i]);
    }
    getchar();
    return 0;
}
````

#### realloc(variável, tamanho)
- É uma função capaz de realocar espaço de memória em bytes. Recebe dois parâmetros: variável a ser redimensionada e novo tamanho de memória em bytes. A devolução de realloc é do tipo void necessitando de uma conversão (CAST) antes da atribuição.

````c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, *vetor;
    
    //===============================================
    // Aloca memória inicial para 5 inteiros (inicializados com 0)
    vetor = (int *)calloc(5, sizeof(int));
    
    // Preenche os primeiros 5 elementos (0 a 4)
    for (i = 0; i < 5; i++) {
        vetor[i] = i;
    }
    
    //===============================================
    // Realoca memória para 10 inteiros (mantendo os valores existentes)
    vetor = (int *)realloc(vetor, 10 * sizeof(int));
    
    // Preenche os novos elementos (5 a 9)
    for (i = 5; i < 10; i++) {
        vetor[i] = i;
    }
    
    //===============================================
    // Imprime todos os elementos do vetor
    for (i = 0; i < 10; i++) {
        printf("vetor[%i] = %i\n", i, vetor[i]);
    }
    
    getchar();  // Pausa para visualização
    free(vetor); // Libera a memória alocada
    
    return 0;
}
````

#### free(variável)
- É uma função capaz de desalocar espaço de memória. 
- A função free não limpa o valor dos espaços reservados, apenas libera para futura alocação