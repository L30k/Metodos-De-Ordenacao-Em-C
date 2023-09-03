#include <stdio.h>
#include <stdlib.h>

int Maior(int vet[], int tam);
void countingSort(int vet[], int tam);

int main() {
    int tam = 10;
    int vet[tam];

    for (int i = 0; i < tam; i++) {
        vet[i] = rand() % 100;
        printf("|%d| ", vet[i]);
    }
    printf("\n");

    countingSort(vet, tam);

    for (int i = 0; i < tam; i++) {
        printf("|%d| ", vet[i]);
    }

    return 0;
}

int Maior(int vet[], int tam) {
    int x = vet[0];
    for (int i = 1; i < tam; i++) {
        if (vet[i] > x) {
            x = vet[i];
        }
    }
    return x;
}

void countingSort(int vet[], int tam) {
    int maior = Maior(vet, tam);
    int vetAux[maior + 1];

    for (int i = 0; i < maior + 1; i++) { 
        vetAux[i] = 0;
    }

    for (int i = 0; i < tam; i++) {
        vetAux[vet[i]]++;
    }

    int j = 0;
    for (int i = 0; i < maior + 1; i++) { 
        while (vetAux[i] != 0) {
            vet[j] = i;
            j++;

            vetAux[i]--;
        }
    }
}
