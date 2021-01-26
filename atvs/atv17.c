#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[100], par[100], c;
    int tam, valor, i, j;
    
    while (scanf("%s", frase) != EOF){
        tam = strlen(frase);
        valor = 0;
        j = -1;

        for(i=0; i < tam; i++) {
            if(frase[i] == '(' || frase[i] == '[' || frase[i] == '{'){
                j++;
                par[j] = frase[i];
            }
            if(frase[i] == ')' || frase[i] == ']' || frase[i] == '}'){
                if(par[j] == '('){
                    c = ')';
                }
                else if(par[j] == '['){
                    c = ']';
                }
                else{
                    c = '}';
                }
                if(frase[i] != c){
                    valor = 1;
                }
                j--;
            }
        }
        
        if(valor == 1){ 
            printf("NAO \n");
        }
        else{ 
            printf("SIM \n");
        }
    }
        return 0;
}
