#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define VAL 10


//Decalração
void ShellSort(int *vet, int cont);


int main(){
    srand(time(NULL));

    int vet[VAL];
    int escolha;

    
    for(int i = 0; i < VAL; i++){
        vet[i] = rand()% 100;
        printf("|%d| ", vet[i]);
    }
    printf("\n");
    
    ShellSort(vet, VAL);
    
    for(int i = 0; i < VAL; i++){
        printf("|%d| ", vet[i]);
    }
    return 0;
}

//Shell sort
void ShellSort(int *vet, int cont){
        int h = cont/2;
        for(int j = h; j != 0; j--){
            h = j;
            for(int i = 0; h < cont; i++){
            
            if(vet[i] > vet[h] &&  h <= cont){
                int aux = vet[h];
                vet[h] = vet[i];
                vet[i] = aux;
            }
            
            h = h + 1;
        }

    }
}

