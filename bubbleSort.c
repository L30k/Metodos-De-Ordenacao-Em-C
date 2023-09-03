#include <stdio.h>
#include <stdlib.h>


void BubbleSort(int *vet, int VAL);


int main(){
    int cont = 10;
    
    int vet[cont];
    
    for(int i = 0; i < cont; i++){
        vet[i] = rand()% 100;
        printf("|%d| ", vet[i]);
    }
    printf("\n");
    
    BubbleSort(vet, cont);
    
    for(int i = 0; i < cont; i++){
        printf("|%d| ", vet[i]);
    }
    
    return 0;
}


void BubbleSort(int *vet, int VAL){
    for(int i = 0; i < VAL; i++){
        for(int j = 0; j < VAL; j++){
            if(vet[i] < vet[j]){
                int aux = vet[j];
                vet[j] = vet[i];
                vet[i] = aux;
            }
        }
    }
}

