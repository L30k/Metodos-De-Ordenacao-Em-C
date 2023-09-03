#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void merge(int vet[], int inicio, int meio, int fim, int tam);
void mergeSort(int vet[], int inicio, int fim, int tam);

int main() {
    srand(time(NULL));
    int vetor[10];

    for (int i = 0; i < 10; i++) {
        vetor[i] = rand() % 100;
        printf("|%d| ", vetor[i]);
    }
    printf("\n");

    mergeSort(vetor, 0, 9, 10);

    for (int i = 0; i < 10; i++) {
        printf("|%d| ", vetor[i]);
    }

    return 0;
}

void merge(int vet[], int inicio, int meio, int fim, int tam) {
    int aux[tam];

    for (int i = inicio; i <= fim; i++) {
        aux[i] = vet[i];
    }

    int i = inicio;
    int j = meio + 1;
    int k = 0;

    for (; i <= meio && j <= fim; k++) {
        if (aux[i] <= aux[j]) {
            vet[inicio + k] = aux[i];
            i++;
        } else {
            vet[inicio + k] = aux[j];
            j++;
        }
    }

    while (i <= meio) {
        vet[inicio + k] = aux[i];
        i++;
        k++;
    }

    while (j <= fim) {
        vet[inicio + k] = aux[j];
        j++;
        k++;
    }
}

void mergeSort(int vet[], int inicio, int fim, int tam) {
    if (inicio >= fim) {
        return;
    } else {
        int meio = (inicio + fim) / 2;
        mergeSort(vet, inicio, meio, tam);
        mergeSort(vet, meio + 1, fim, tam);

        merge(vet, inicio, meio, fim, tam);
    }
}
