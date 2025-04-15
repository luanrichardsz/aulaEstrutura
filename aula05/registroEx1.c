#include <stdio.h>
#include <stdlib.h>

#define MAX 2

/////////////////////////////////////////////////////////////
typedef struct {
    char nome[20];
} s_conjuge;

/////////////////////////////////////////////////////////////
typedef struct {
    char nome[20];
    char fone[11];
    s_conjuge conjuge;
} s_cliente;

/////////////////////////////////////////////////////////////

int main(void) {
    s_cliente cliente[MAX];
    int i;
    
    // Entrada de dados
    for(i = 0; i < MAX; i++) {
        printf("Ficha: %d\n", i+1);
        printf("Nome: ");
        scanf(" %20[^\n]", cliente[i].nome);
        printf("Fone: ");
        scanf(" %10[^\n]", cliente[i].fone);
        printf("Conjuge: ");
        scanf(" %20[^\n]", cliente[i].conjuge.nome);
        system("cls");
    }	
    
    // Saída de dados
    for(i = 0; i < MAX; i++) {
        printf("Ficha: %d\n", i+1);
        printf("----------------------------------------\n");
        printf("Nome: %s\n", cliente[i].nome);
        printf("Fone: %s\n", cliente[i].fone);
        printf("Conjuge: %s\n", cliente[i].conjuge.nome);
        printf("----------------------------------------\n");
    }
    
    system("pause");
    return 0;
}