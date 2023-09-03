#include <stdio.h>
#include <stdlib.h>

void radixSort(int vet[], int tam);

int main(){
    int vetor[10];
    
    for(int i = 0; i < 10; i++){
        vetor[i] = rand()%100;
    }
    
	radixSort(vetor,10);
	
	for (int i = 0; i < 10; i++) {
		printf("%d ", vetor[i]);
	}

    return 0;
}

void radixSort(int vet[], int tam){
    int maior = vet[0], val = 1, aux[tam], base[tam];
    
    for(int i = 1; i < tam; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    
    while((maior/val) > 0){
        for(int i = 0; i < tam; i++){
            aux[i] = 10;
        }
        for(int i = 0; i < tam; i++){
            base[i] = (vet[i]/val) % 10;
            //printf("%d ", base[i]);
        }
        //printf("\n");
        
        int cont = 0, pos = 0;
        while(cont != 11){
            for(int i = 0; i < tam; i++){
                if(base[i] == cont){
                    aux[pos] = vet[i];
                    pos++;
                }
            }
            cont++;
        }
        
        for(int i = 0; i < tam; i++){
            vet[i] = aux[i];
        }
        
        val*= 10;
    }
}
