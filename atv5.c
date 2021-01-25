#include <stdio.h>
#include <string.h>

int main(){
    int size, i;
    scanf("%d", &size);
    int vetor[size];
    for(i=0; i < size; i++){
        scanf("%d", &vetor[i]);
    }
    for(i = (size-1); i > -1; i--){
        printf("%d ", vetor[i]);
    }
    return 0;
}
