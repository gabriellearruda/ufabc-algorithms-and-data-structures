/* Escreva um programa que exibe todos os números triangulares entre 1 e 1000.
Um número n é triangular se é igual ao produto de 3 números inteiros consecutivos. 
Por exemplo, 120 é triangular pois 4x5x6 = 120. */

#include <stdio.h>

int main() {
	int num, i;
	num = 1;
	for(i=1; num<1000; i++){
    	num = i*(i+1)*(i+2);
    	if (num < 1000){
        	printf("%d \n", num);
    	}
	}
    
	return 0;
}
