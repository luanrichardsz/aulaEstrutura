# Lista

É uma coleção de valores, ordenados ou não, armazenados de forma alinhada. 

## As listas se dividem em:
### Fila (FIFO - LILO)
É um tipo especial de lista, formada por elementos do mesmo tipo, que
comporta as operações de criação, inserção (no fim da lista), remoção (no início
da lista), acesso e destruição. É normalmente utilizado em controle de fluxo, tais
como: fila de impressão; transações de banco de dados; etc.

### Pilha (FILO - LIFO)
É um tipo especial de lista, formada por elementos do mesmo tipo, que
comporta as operações de criação, inserção (no fim da lista), remoção (no fim da
lista), acesso e destruição.

## Tipos de Alocação de Memória
- [Estatica](alocacao/alocacaoEstatica.md)
  - O espaço de memória é alocado no momento da compilação.
    Exige a definição prévia do número máximo de elementos da
    lista. A variável vetor é um bom exemplo .
- [Dinâmica](alocacao/alocacaoDinamica.md)
  - O espaço de memória é alocado em tempo de execução.
    Aumenta ou diminui seu tamanho a medida que são adicionados
    novos elementos e diminui quando são removidos.