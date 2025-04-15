#include <stdio.h>
#include <stdlib.h>

#define MAX 10

//======================================================
int dado[MAX], qtd = 0, i = 0;
//======================================================

// PUSH
int inserir(void) {
    if(qtd >= MAX) {
        printf("A pilha esta cheia!\n\n");
        return -1;
    } else {
        printf("Digite o valor para empilhar: ");
        scanf("%d", &dado[qtd]);
        printf("\n%d armazenado na posicao %d\n\n", dado[qtd], qtd);
        qtd++;
        getchar();
        return 0;
    }
}

// POP
int remover(void) {
    if (qtd == 0) {
        printf("A pilha esta vazia!\n\n");
        return -1;
    } else {
        qtd--;
        printf("Elemento %d removido\n\n", dado[qtd]);
        dado[qtd] = 0;
        getchar();
        return 0;
    }
}

// EXIBIR
int exibir(void) {
    if (qtd == 0) {
        printf("A pilha esta vazia!\n\n");
    } else {
        printf("Conteudo da pilha:\n");
        for(i = qtd-1; i >= 0; i--) { 
            printf("Posicao %d --> %d\n", i, dado[i]);
        }
        printf("\n");
        getchar();
    }
    return 0;
}

int menu(void) {
    int op;
    
    system("cls");
    printf("======================\n");
    printf("        PILHA          \n");
    printf("======================\n");
    printf(" 1 - Empilhar    \n");
    printf(" 2 - Desempilhar (Pop) \n");
    printf(" 3 - Exibir            \n");
    printf(" 4 - Sair              \n");
    printf("======================\n");
    printf("Selecione sua opcao: ");
    scanf("%d", &op);
    system("cls");
    
    switch (op) {
        case 1: 
            inserir();
            break;
        case 2: 
            remover();
            break;
        case 3: 
            exibir();
            break;
        case 4:
            printf("Saindo...\n");
            exit(0);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }
    
    getchar();
    getchar();
    return op;
}

int main() {
    while(1) {
        menu();
    }
    return 0;
}