#include <stdio.h>
#include <string.h>

int main(){
    int size, num, tam=0, i, j;
    char comando;
    
    scanf("%d", &size);
    int vetor[size];

    while (scanf("%s %d", &comando, &num) != EOF){
        if(comando == 'I'){
            vetor[tam] = num;
            tam++;
        }
        else if(comando == 'E'){
            for(i=0; i<tam; i++){
                if(vetor[i] == num){
                    for(j=i+1; j<tam; j++){
                        vetor[i] = vetor[j];
                        i++;
                    }
                tam--;
                break;
                }
            }
        }
    }
    
    for(i=0; i<tam; i++){
        printf("%d ", vetor[i]);
    }
}

