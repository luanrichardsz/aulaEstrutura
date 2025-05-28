# Tabela Hash

A tabela hash, também conhecida como tabela de dispersão ou tabela
de espalhamento, é uma estrutura de dados que associa uma tabela a
uma função hash.

A função hash é responsável pela distribuição dos dados na tabela. Ela
é feita através da associação de cada chave ou dado a uma posição ou
índice da tabela.

## Por que usar Tabela Hash?

- Eficiência
  - Em muitos casos, as operações de busca, inserção e remoção em
    tabelas hash podem ser realizadas em tempo médio constante,
    ou seja, a velocidade dessas operações não depende do tamanho
    da tabela. Isso torna as tabelas hash muito eficientes para
    grandes volumes de dados.


- Flexibilidade
  - As tabelas hash podem armazenar diferentes tipos de dados,
    desde números e textos até objetos complexos.


- Vantagens
  - Acesso, inserção e remoção muito rápidos.
  - Excelente para buscas rápidas por chave.


- Desvantagens
  - Precisa de uma boa função hash.
  - Pode consumir mais memória.
  - Desempenho pode cair se houver muitas colisões.


## O que são Colisões?

Uma colisão acontece quando duas chaves diferentes geram o mesmo índice através da função hash. Este é um desafio nas tabelas hash.

Existem diversas técnicas para lidar com colisões, como:

- Encadeamento separado
  - Valores que colidem são armazenados em uma lista ligada na mesma posição da tabela hash.

- Endereçamento aberto
  - Se ocorre uma colisão, procura-se outra posição vazia na tabela para armazenar o valor que colidiu. 


Essas técnicas garantem que todos os dados possam ser armazenados e recuperados, mesmo quando chaves diferentes inicialmente mapeiam para a mesma localização.