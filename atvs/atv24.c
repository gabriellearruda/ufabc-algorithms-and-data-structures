#include <stdio.h>
#include <string.h>

void troca(int* v, int i, int j) {
    int tmp;
    tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;
    return;
}

int insertionsort(int* v, int tam){
    int i,j,k,tmp,x=0;
    for (i=1; i<tam; i++){
       
        tmp = v[i];
        for (j=i-1; j>=0 && v[j] > tmp; j--){
            v[j+1] = v[j];
            v[j] = tmp;
            for(k=0; k < tam; k++){
                printf("%d ", v[k]);
            }
            printf("\n");
            x++;
            
        }
        v[j+1] = tmp;
        
    }
    return x;
}

int main(){
    int size, i, ord, x;
    scanf("%d", &size);
    int vetor[size];
    for(i=0; i < size; i++){
        scanf("%d", &vetor[i]);
    }
    for(i=0; i < size; i++){
       printf("%d ", vetor[i]);
    }
    printf("\n");
    x = insertionsort(vetor, size);
    
    for(i=0; i < size; i++){
       printf("%d ", vetor[i]);
    }
    printf("\n");
    printf("Trocas:%d", x);
    return 0;
}

