#include <stdio.h>
#include <string.h>

int main(){
    int num, tam=0, i, k;
    char comando;
    int vetor[50];

   while (scanf("%s %d", &comando, &num) != EOF){
        if(comando == 'E'){
            vetor[tam] = num;
            tam++;
        }
        else if(comando == 'D'){
            if(tam==0){
                printf("\n");
            }
            else{
                printf("%d \n", vetor[0]);
                for(i=0; i<tam-1; i++){
                    k= i+1;
                    vetor[i] = vetor[k];
                }
                tam--;
            }
        }
        else if(comando == 'M'){
            for(i=0; i<tam; i++){
                printf("%d ", vetor[i]);
            }
            printf("\n");
        }
        else if(comando == 'C'){
            printf("%d \n", tam);
        }
    }
}
