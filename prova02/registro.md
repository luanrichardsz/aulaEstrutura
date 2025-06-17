# Registro
É uma coleção de variáveis que podem ser de tipos diversos e referenciada por apenas um nome.

Exemplo:
````c
#include <stdio.h>
struct <Nome>
{
    <tipo> <nome_var_1>;
    <tipo> <nome_var_2>;
    <tipo> <nome_var_3>;
    <tipo> <nome_var_n>;
};
````

## Horario
````c
#include <stdio.h>

int main()
{
    // Definindo o Registro horario
    typedef struct
    {
        int hora;
        int minuto;
        int segundo;
    } horario;
    
    horario inicio;
    
    inicio.hora = 8;
    inicio.minuto = 10;
    inicio.segundo = 20;
    
    printf("Inicio: %i:%i:%i\n", inicio.hora, inicio.minuto, inicio.segundo);
    
    getchar();
    return 0;
}
````
## Clientes

````c
#include <stdio.h>
#include <stdlib.h>
#define MAX 3

// registro
typedef struct
{
    char nome[2][20];
} s_filiacao;

// registro
typedef struct
{
    char nome[20];
    int fone[10];
    s_filiacao filiacao;
} s_cliente;

int main(void)
{
    s_cliente cliente[MAX];
    int i;
    
    for(i=0;i<MAX;i++)
    {
        printf("Ficha: %d\n",i+1);
        printf("Nome : ");
        scanf(" %20[^\n]",&cliente[i].nome);
        printf("Fone : ");
        scanf(" %10[^\n]",&cliente[i].fone);
        printf("Pai : ");
        scanf(" %20[^\n]",&cliente[i].filiacao.nome[0]);
        printf("Mae : ");
        scanf(" %20[^\n]",&cliente[i].filiacao.nome[1]);
        system("cls");
    }
    
    for(i=0;i<MAX;i++)
    {
        printf("Ficha: %d\n",i+1);
        printf("----------------------------------------\n");
        printf("Nome : %s\n",cliente[i].nome);
        printf("Fone : %s\n",cliente[i].fone);
        printf("Pai : %s\n",cliente[i].filiacao.nome[0]);
        printf("Mae : %s\n",cliente[i].filiacao.nome[1]);
        printf("----------------------------------------\n");
    }
    
    system("pause");
    return 0;
}
````