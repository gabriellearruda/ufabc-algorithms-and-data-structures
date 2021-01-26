#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char palavra1[50], palavra2[50], merge[102], k=0;
    int tam, j, i, size;
    
    scanf("%d", &tam);
    for(i=0; i < tam; i++){
        k = 0;
        scanf("%s %s", palavra1, palavra2);
        for(j=0; j < 50; j++) {
           if(j < strlen(palavra1)){
            merge[k] = palavra1[j];
            k++;
           }
           if(j < strlen(palavra2)){
            merge[k] = palavra2[j];
            k++;
           }
        }
        size = strlen(palavra1) + strlen(palavra2);
        merge[size] = '\0';
        printf("%s \n", merge);
        palavra1[0] = '\0';
        palavra2[0] = '\0';
    }

    return 0;
}
