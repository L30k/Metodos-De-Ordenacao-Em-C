#include <stdio.h>
#include <stdlib.h>

void constroiHeap(int *vet, int tam, int raiz);
void heapSort(int *vet, int tam);

int main()
{
    int tam = 12;
    int vet[tam];
    
    for (int i = 0; i < tam; i++){
        vet[i] = rand() %100;
        printf("|%d| ", vet[i]);
    }
    printf("\n");
    
    
    heapSort(vet, tam-1);
    
    
    for (int i = 0; i < tam; i++){
        printf("|%d| ", vet[i]);
    }


    return 0;
}

void constroiHeap(int *vet, int tam, int raiz){
     int ramificacao, valor;
     valor = vet[raiz];
    
     while(raiz <= tam/2){
        ramificacao = 2 * raiz;
        
        if(ramificacao < tam && vet[ramificacao] < vet[ramificacao + 1]){
           ramificacao++;
        }
        
        if(valor >= vet[ramificacao]){
           break;
        }
         
        vet[raiz] = vet[ramificacao];
        raiz = ramificacao;
     }
     vet[raiz] = valor;
}

void heapSort(int *vet, int tam){
    int troca;
    
    for(int i = tam/2 ;i >= 0; i--){
       constroiHeap(vet, tam, i);
    }
    
    while(tam > 0){
        troca = vet[0];
        vet[0] = vet[tam];
        vet[tam] = troca;
        constroiHeap(vet, --tam, 0);
    }
}
