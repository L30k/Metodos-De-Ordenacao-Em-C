# Metodos-De-Ordenacao-Em-C

Implemente diversos métodos de ordenação em linguagem de programação C.

## Descrição

Este programa em C é uma ferramenta versátil de ordenação que permite aos usuários ordenar uma lista de elementos em ordem crescente usando diversos algoritmos de ordenação. Os algoritmos de ordenação incluídos neste programa são:

## [Bubble Sort](bubbleSort.c)
- O Bubble Sort é um algoritmo de ordenação simples que percorre a lista repetidamente, comparando elementos adjacentes e trocando-os se estiverem na ordem errada. Esse processo é repetido até que a lista esteja completamente ordenada.

## [Counting Sort](countingSort.c)
- O Counting Sort é um algoritmo de ordenação eficiente para ordenar números inteiros em um intervalo limitado. Ele faz uso de um array de contagem para determinar a posição de cada elemento na lista ordenada.

## [Heap Sort](heapSort.c)
- O Heap Sort é um algoritmo de ordenação que utiliza uma estrutura de dados chamada heap para organizar os elementos. Ele constrói um heap a partir da lista e, em seguida, extrai os elementos do heap em ordem crescente ou decrescente.

## [Insertion Sort](insertionSort.c)
- O Insertion Sort é outro algoritmo de ordenação eficiente para listas pequenas. Ele divide a lista em duas partes: uma parte ordenada e uma parte não ordenada. O algoritmo percorre a parte não ordenada, movendo elementos para a parte ordenada e inserindo-os na posição correta.

## [Merge Sort](mergeSort.c)
- O Merge Sort é um algoritmo de ordenação baseado na técnica de divisão e conquista. Ele divide a lista em duas metades, ordena cada metade separadamente e, em seguida, combina as duas metades ordenadas para criar a lista final ordenada.

## [Quick Sort](quickSort.c)
- O Quick Sort é outro algoritmo de ordenação baseado na técnica de divisão e conquista. Ele escolhe um elemento chamado de "pivô" e rearranja os elementos de forma que todos os elementos menores que o pivô estejam à esquerda e todos os elementos maiores estejam à direita. Esse processo é aplicado recursivamente para ordenar a lista.

## [Radix Sortt](radixSort.c)
- O Radix Sort é um algoritmo de ordenação especializado em ordenar números inteiros. Ele ordena os números em dígitos, começando pelo dígito menos significativo e indo até o dígito mais significativo.

## [Selection Sort](selectionSort.c)
- O Selection Sort é um algoritmo de ordenação simples que encontra o menor elemento na lista não ordenada e o move para a posição correta na lista ordenada. Esse processo é repetido até que toda a lista esteja ordenada.

## [Shell Sort](shellSort.c)
- O Shell Sort é uma variação do Insertion Sort que melhora o desempenho do algoritmo. Ele divide a lista em grupos menores e aplica o Insertion Sort a cada grupo, gradualmente reduzindo o tamanho dos grupos até que toda a lista esteja ordenada.


## Requisitos

- Compilador C (por exemplo, GCC) instalado no seu sistema.

## Como Compilar e Executar

1. Abra o terminal.
2. Navegue até o diretório onde o arquivo de código-fonte do programa está localizado.
3. Compile o programa com o comando: `gcc bubbleSort.c -o bubbleSort`
4. Execute o programa com o comando: `./bubbleSort`

## Autor

Leonardo Yago Nascimento Silva




