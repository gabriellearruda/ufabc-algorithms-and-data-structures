#include <stdio.h>
#include <string.h>

int verifica (int* v, int n) {    
if (n > 1) 
   for (int i = 1; i < n; i++) 
      if (v[i-1] > v[i]) 
         return 0;     
      return 1; 
 }

void troca(int* v, int i, int j) {
    int tmp;
    tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;
    return;
}

int bubblesort (int* v, int tam){
    int i, j, k;
    for (j=0; j<tam; j++){
        for (i=tam-1; i>0; i--){
            if (v[i-1] > v[i]){
                troca(v, i, i-1);
            }
        }
        k = verifica(v, tam);
        if(k != 1){
            
            for(i=0; i < tam; i++){
                printf("%d ", v[i]);
            }
            printf("\n");
        }
    }
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
    x = bubblesort(vetor, size);
   for(i=0; i < size; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}
