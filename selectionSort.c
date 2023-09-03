#include <stdio.h>
#include <stdlib.h>

void SelectionSort(int *vet, int VAL);

int main() {
    int cont = 10;
    int vet[cont];

    for (int i = 0; i < cont; i++) {
        vet[i] = rand() % 100;
        printf("|%d| ", vet[i]);
    }
    printf("\n");

    SelectionSort(vet, cont);

    for (int i = 0; i < cont; i++) {
        printf("|%d| ", vet[i]);
    }

    return 0;
}

void SelectionSort(int *vet, int VAL) {
    int pos;
    for (int i = 0; i < VAL - 1; i++) {
        pos = i;
        for (int j = i + 1; j < VAL; j++) {
            if (vet[pos] > vet[j]) {
                pos = j;
            }
        }
        if (pos != i) {
            int aux = vet[pos];
            vet[pos] = vet[i];
            vet[i] = aux;
        }
    }
}
