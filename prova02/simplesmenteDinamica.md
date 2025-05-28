# Alocação Dinâmica

## Lista Simplesmente Encadeada
É aquela que possui uma sequência de elementos encadeados por ponteiros, ou seja, cada elemento deve conter, além do dado propriamente dito, uma referência para o próximo elemento da lista. 

Alguns pontos a serem destacados são:
- Tem como principal objetivo, otimizar o uso de memória; 
- Permite a utilização de blocos não consecutivos de memória; 
- Utiliza ponteiro como forma de encadeamento dos blocos; 
- As variáveis são declaradas em tempo de execução.

O elemento básico de uma lista encadeada é o nó.

O nó é uma estrutura formada por duas partes:
- A informação a ser armazenada; 
- Um ponteiro para o próximo nó.

## Fila Simplesmente Encadeada
É a lista, simplesmente encadeada, que segue o princípio FIFO (First In – First Out). Nela, o primeiro elemento a entrar será o primeiro a sair.

### Criando uma 
1. Alocar o nó cabeça;
2. Apontar o nó cabeça para NULL;

### Inserindo Dados
1. Alocar o novo nó;
2. Apontar o novo nó para onde o anterior está apontando;
3. Apontar o nó anterior para o novo nó;
4. Atribuir valor para o novo nó;

