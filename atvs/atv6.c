#include <stdio.h>
#include <string.h>

int main(){
    int size, i, j, valor=0;

    scanf("%d", &size);
    int matrix[size][size];
    for(i=0; i < size; i++){
        for(j=0; j < size; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i=0; i < size; i++){
        for(j=0; j < size; j++){
            if(j<i){
                valor = valor + matrix[i][j];
            }
        }
    }
    
    printf("%d", valor);
    
    
    return 0;
}
