# Ordenação
Ordenação é o processo de organizar dados de um mesmo tipo em uma ordem crescente ou decrescente

Existem quatro tipos de ordenação:
- Selection Sort
    - Na primeira passagem são visitados todos os dados, a partir do
      primeiro, identificando o menor entre eles. Na segunda passagem, é
      repetido o processo a partir do segundo dado, depois do terceiro e
      assim por diante até o final da classificação.
    - [Código](sorts/selection.c)


- Bubble Sort
    - Na primeira passagem são visitados todos os dados e comparados dois
      a dois a partir do primeiro, identificando o maior entre eles. Na
      segunda passagem, é repetido o processo a partir do segundo dado,
      depois do terceiro e assim por diante até o final da classificação.
    - [Código](sorts/bubble.c)


- Insertion Sort
    - A ordenação por inserção (insertion sort) se baseia em comparações
      sucessivas entre dois elementos adjacentes e a troca quando o
      elementos seguinte é menor que o anterior. Em caso de troca, os
      elementos anteriores deverão ser comparados novamente.
    - [Código](sorts/insertion.c)


- Quick Sort (Mais Eficaz)
    - A ordenação rápida (quick sort) se baseia na estratégia dividir para
      conquistar. Divide a sequência de valores em duas partes, escolhe-se
      um pivô e faz-se comparações sucessivas deixando a direita os valores
      maiores que o pivô e a esquerda os valores menores que o pivô.
    - [Código](sorts/quick.c)