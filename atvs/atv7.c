#include <stdio.h>
#include <string.h>

int main(){
    int size, i, min, max;

    scanf("%d", &size);
    int vetor[size];
    for(i=0; i < size; i++){
        scanf("%d", &vetor[i]);
    }
    min = vetor[0];
    max = vetor[0];
    for(i=0; i < size; i++){
        if(vetor[i] > max){
            max = vetor[i];
        }
        if(vetor[i] < min){
            min = vetor[i];
        }
    }

    printf("%d %d", min, max);

   
    return 0;
}
