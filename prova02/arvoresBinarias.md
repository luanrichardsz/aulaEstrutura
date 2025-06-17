# Árvores Binarias

## Árvores
Árvores são estruturas de dados não lineares, adequadas para
representar hierarquias.

### As árvores binárias possuem as seguintes características:

- É composta por nós que se interligam;
- O nó principal é chamado de RAIZ ou PAI;
- Os nós derivados são chamados de GALHOS ou FILHOS;
- Os últimos nós são chamados de FOLHAS ou TERMINAIS;
- Cada nó pode dar origem a 0, 1 ou 2 novos nós;
- Cada nó em si dá origem a uma nova subárvore;
- Cada árvore tem apenas uma raiz;
- Possui uma definição recursiva.

### Terminologias de uma árvore:

- Grau de um nó: número de subárvores relacionadas com o nó
- Folha: um nó de grau zero
- Ordem: número máximo de galhos em um elemento
- Caminho: sequência única de arcos que leva a um nó a partir da raiz
- Comprimento do Caminho: número de arcos no caminho
- Nível de um nó: o comprimento do caminho da raiz até o nó, que é o número de arcos no caminho
- Altura: raiz mais o máximo número de descendentes
- Caminho entre a raiz e a(s) folhas(s) mais distante(s) + 1

### Ordenação Pré-Ordem (RED)
1. Raiz
2. Esquerda
3. Direita 


### Ordenação Em-Ordem (ERD)
1. Esquerda
2. Raiz
3. Direita 


### Ordenação Pós-Ordem (EDR)
1. Esquerda
2. Direita
3. Raiz 


## Recursividade
É a capacidade que uma função possui de chamar a sí própria. Toda
função recursiva deverá possuir um critério de parada, evitando desta
forma um laço infinito.