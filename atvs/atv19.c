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
