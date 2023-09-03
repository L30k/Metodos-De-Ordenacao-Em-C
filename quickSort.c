#include <stdio.h>
#include <stdlib.h>


void quickSort(int vet[], int esq, int dir);
int cont = 10;

int main(){
    
    int vet[cont];
    
    for(int i = 0; i < cont; i++){
        vet[i] = rand()% 100;
        printf("|%d| ", vet[i]);
    }
    printf("\n");
    
    quickSort(vet, 0, cont - 1);
    
    for(int i = 0; i < cont; i++){
        printf("|%d| ", vet[i]);
    }
    
    return 0;
}


void quickSort(int vet[], int esq, int dir){
    int aux;
    int i = esq;
    int j = dir;
    int pivo = vet[(esq + dir)/2];
    
    while(i <= j) {
        while(vet[i] < pivo && i < dir) {
            i++;
        }
        
        while(vet[j] > pivo && j > esq) {
            j--;
        }
        
        if(i <= j) {
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
            i++;
            j--;
        }
    }
    
    if(j > esq) {
        quickSort(vet, esq, j);
    }
    
    if(i < dir) {
        quickSort(vet, i, dir);
    }
}

