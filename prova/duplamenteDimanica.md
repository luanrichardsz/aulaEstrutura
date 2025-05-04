# Alocação Dinâmica
## Lista Duplamente Encadeada

É aquela que possui uma sequência de elementos duplamente encadeados por ponteiros, ou seja, cada elemento deve conter, além do dado propriamente dito, uma referência para o elemento anterior e outra para o próximo elemento da lista. 

Alguns pontos a serem destacados são:
- Tem como principal objetivo, otimizar o uso de memória; 
- Permite a utilização de blocos não consecutivos de memória; 
- Utiliza ponteiro como forma de encadeamento dos blocos; 
- As variáveis são declaradas em tempo de execução.

### Fila Duplamente Encadeada
É a lista duplamente encadeada que segue o princípio FIFO (First In – First Out),
ou seja, o primeiro elemento a entrar será o primeiro a sair

### Pilha Duplamente Encadeada
É a lista duplamente encadeada que segue o princípio LIFO (Last In – First Out),
ou seja, o último elemento a entrar será o primeiro a sair.

#### Inserindo Dados
1. Alocar o novo nó
2. Apontar o próximo do novo nó para onde o próximo do cabeça está apontando;
3. Apontar o próximo do nó cabeça para o novo nó;
4. Apontar o anterior do novo nó para o nó cabeça;
5. Apontar o anterior do nó seguinte para o novo nó;
6. Atribuir valor para o novo nó;