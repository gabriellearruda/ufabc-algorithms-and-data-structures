#include <stdio.h>
#include <stdlib.h>

typedef struct arvore
{
  int num;
  struct arvore* esq;
  struct arvore* dir;
} Arvore;

Arvore* createArvore(){return NULL;}

int arvvazia(Arvore* t){return t == NULL;}

void insereArvore(Arvore** t, int num)
{
  if(*t == NULL){
    *t = (Arvore*)malloc(sizeof(Arvore));
    (*t)->dir = NULL;
    (*t)->esq = NULL;
    (*t)->num = num;
  } else {
    if(num < (*t)->num)
    {
      insereArvore(&(*t)->dir, num);
    }
    if(num > (*t)->num)
    {
      insereArvore(&(*t)->esq, num);
    }
  }
}

int maior(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}

int altura(Arvore *t){
   if((t == NULL) || (t->esq == NULL && t->dir == NULL))
       return 0;
   else
       return 1 + maior(altura(t->esq), altura(t->dir));
}

int main(){
  Arvore* t = createArvore(); 
  int n;
  while (scanf("%d", &n) != EOF){
    insereArvore(&t, n);
  }
  printf("%d", altura(t));
  free(t);
  return 0;
}
