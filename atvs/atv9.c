#include <stdio.h>
#include <string.h>

int main(){
    int size, i, j, aux;

    scanf("%d", &size);
    int vetor[size];
    for(i=0; i < size; i++){
        scanf("%d", &vetor[i]);
    }
    
    for(i=0; i < size; i++){
        for(j=0; j < size; j++){
            if(vetor[i] < vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    for(i=0; i < size; i++){
        printf("%d ", vetor[i]);
    }
    
    return 0;
}
