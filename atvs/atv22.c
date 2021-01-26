#include <stdio.h>
#include <string.h>

int main(){
    int size;
    while(scanf("%d", &size) != EOF){
        int i, x=1, y=1;
        int vetor[size];
        for(i=0; i < size; i++){
            scanf("%d", &vetor[i]);
        }
        for(i=1; i < size; i++){
            if (vetor[i-1] > vetor[i]){
                y++;
            }
            else if(vetor[i-1] < vetor[i]){
                x++;
            }
        }
        if(x == size){
            printf("C\n");
        }
        else if(y == size){
            printf("D\n");
        }
        else{
            printf("N\n");
        }
    }
}
