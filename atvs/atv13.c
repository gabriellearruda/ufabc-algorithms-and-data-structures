#include <stdio.h>
#include <string.h>

int main(){
    int num, tam=-1, i, k;
    char comando;
    int vetor[50];

   while (scanf("%s %d", &comando, &num) != EOF){
        if(comando == 'E'){
            tam++;
            vetor[tam] = num;
        }
        else if(comando == 'D'){
            if(tam<0){
                printf("-1 \n");
                tam--;
            }
            else{
                printf("%d \n", vetor[tam]);
                tam--;
            }
        }
        else if(comando == 'T'){
            if(tam<=0){
                printf("-1 \n");
            }
            else{
                printf("%d \n", vetor[tam]);
            }
        }
        else if(comando == 'M'){
            if(tam<0){
                printf("%d ", vetor[tam]);
                printf("\n");
            }
            else{
                for(i=tam; i>=0; i--){
                    printf("%d ", vetor[i]);
                }
            }
            printf("\n");
        }
        else if(comando == 'C'){
            int x = tam+1;
            printf("%d \n", x);
        }
    }
}
