#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int n, i;
  while (scanf("%d", &n) != EOF){
    i = log(n)/log(2);
    printf("%d", i);
  }
}
