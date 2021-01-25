#include <stdio.h>
#include <string.h>

int main(){
    char frase[200], vetor[200];
    int frasesize, tamanho = 0, i = 0, count = 0, maior=0;
    fgets(frase, 200, stdin);
    frasesize = strlen(frase) - 1;
    for(i; i < strlen(frase); i++){
    	if(i==frasesize || frase[i] == ' '){
    	    tamanho = i - count;
    	    count=i + 1;
            if(tamanho>maior){
                maior=tamanho;
            }
        }
    }
	
    printf("%d", maior);
    return 0;
}
