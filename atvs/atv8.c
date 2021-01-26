#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[50], invfrase[50];
    int valor, tam, j, i;
    
    while (scanf("%s", frase) != EOF){
        tam = strlen(frase);
        j = tam;
        tam++;
        j--;
        
        for(i=0; i < tam; i++) {
           invfrase[i] = frase[j];
           j--;
        }
        
        tam--;
        
        for(i=0; i < tam; i++) {
           if(frase[i] != invfrase[i]){ 
               valor = 1; 
           }
        }
        
        if(valor == 1){ 
            printf("NAO PALINDROMO \n");
        }
        else { 
            printf("PALINDROMO \n");
        }
    }
        return 0;
}
