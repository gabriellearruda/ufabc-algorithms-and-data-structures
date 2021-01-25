#include <stdio.h>
#include <math.h>

/* Escreva um programa que imprime os n primeiros números naturais ímpares.
Faça a leitura de um número natural n e a chamada da função criada na função main. */

int main(){
    int n, i;
    int prim_impar = 1;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("%d ", prim_impar);
        prim_impar = prim_impar + 2;
    }
    return 0;
  }
