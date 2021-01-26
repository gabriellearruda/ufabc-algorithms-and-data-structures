#include <stdio.h>
#include <string.h>

void troca(int* v, int i, int j) {
    int tmp;
    tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;
    return;
}

int menor(int* v, int a, int b){
    int i,min = a;
    for (i=a+1; i<=b; i++){
        if (v[i] < v[min]){
            min = i;
        }
    }
    return min;
}
 
 
int selectionsort(int* v, int tam){
    int i,j,min,x=0;
    for (i=0; i<tam; i++){
        for(j=0; j < tam; j++){
            printf("%d ", v[j]);
        }
        printf("\n");
        min = menor(v,i,tam-1);
        if(v[min] != v[i]){
            troca(v,min,i);
            x++;            
        }
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
    x = selectionsort(vetor, size);
    for(i=0; i < size; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
    printf("%d", x);
    return 0;
}
