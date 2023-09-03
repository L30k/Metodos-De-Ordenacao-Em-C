#include <stdio.h>
#include <stdlib.h>


void exibir(int vet[], int tam);
int Maior(int vet[], int tam);
void countingSort(int vet[], int tam);

int main(){
    int tam = 10;
    int vet[tam];
    
    for(int i = 0; i < tam; i++){
        vet[i] = rand()%100;
    }
    
    exibir(vet, tam);
    
    countingSort(vet, tam);

    return 0;
}


void exibir(int vet[], int tam){
    printf("\n");
    for(int i = 0; i < tam; i++){
        printf("|%d| ", vet[i]);
    }    
}

int Maior(int vet[], int tam){
    int x = vet[0];
    for (int i = 1; i < tam; i++) {
        if (vet[i] > x){
            x = vet[i];
        }
    }
    return x;
}

void countingSort(int vet[], int tam){
    int maior = Maior(vet, tam);
    int vetAux[maior];
   
    for(int i = 0; i < maior; i++){
        vetAux[i] = 0;
    }
    
    for (int i = 0; i < tam; i++) {
        vetAux[vet[i]]++;
    }
    
    int j = 0;
    for (int i = 0; i < maior; i++) {
        while(vetAux[i] != 0){
            vet[j] = i;
            j++;
            
            vetAux[i]--;
        }
    }
    
    exibir(vet, tam);
}