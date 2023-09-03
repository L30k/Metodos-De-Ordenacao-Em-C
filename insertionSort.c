#include <stdio.h>
#include <stdlib.h>

void InsertionSort(int *vet, int VAL);

int main() {
    int cont = 10;
    int vet[cont];

    for (int i = 0; i < cont; i++) {
        vet[i] = rand() % 100;
        printf("|%d| ", vet[i]);
    }
    printf("\n");

    InsertionSort(vet, cont);

    for (int i = 0; i < cont; i++) {
        printf("|%d| ", vet[i]);
    }

    return 0;
}

void InsertionSort(int *vet, int VAL){
    for(int i = 1; i < VAL; i++){
        for(int j = i; j > 0; j--){
            if(vet[j] < vet[j-1]){
                int aux = vet[j-1];
                vet[j-1] = vet[j];
                vet[j] = aux;
            }else{
                break;
            }
        }
    }
}
