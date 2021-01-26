#include <stdio.h>
#include <string.h>

int main(){
    int num, tam=0, i, j, k;
    char comando;
    int vetor[50];

   while (scanf("%s %d", &comando, &num) != EOF){
        if(comando == 'I'){
            vetor[tam] = num;
            tam++;
        }
        else if(comando == 'R'){
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
        else if(comando == 'B'){
            for(i=0; i<tam; i++){
                if(vetor[i] == num){
                    printf("SIM \n");
                    break;
                }
            }
            printf("NAO \n");
        }
        else if(comando == 'T'){
            int vetInvert[tam];
            for(i = 0; i < tam; i++) {
                vetInvert[i] = vetor[tam-i-1];
            }
            for(i=0; i<tam; i++){
                vetor[i] = vetInvert[i];
            }
        }
        else if(comando == 'E'){
            for(i=0; i<tam; i++){
                printf("%d ", vetor[i]);
            }
            printf("\n");
        }
        else if(comando == 'C'){
            printf("%d \n", tam);
        }
    }
