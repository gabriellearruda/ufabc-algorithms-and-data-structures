/****************************************************/
/*                                                  */
/*           PILHA DE INTEIROS POSITIVOS            */
/*                                                  */
/****************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"


/*   Função que cria e devolve o endereço de uma pilha. 
     A pilha criada estará vazia, com o topo igual a NULL. */
Pilha* cria_pilha(){
    /* Escreva seu código aqui. */
    Pilha* nova = (Pilha*) malloc (sizeof(Pilha));
    nova->topo = NULL;
    return nova;
}

/* Verifica se a pilha enviada como parâmetro está vazia ou não.
   Devolve 1 se a pilha estiver vazia, ou 0, caso contrário */
int pilha_vazia(Pilha* P){
    /* Escreva seu código aqui. */
    return (P->topo == NULL);
}

/* Função que realiza a inclusão de um elemento na pilha. O
   elemento sempre é colocado no topo da pilha               */
void empilha (Pilha* P, int n){
    /* Escreva seu código aqui. */
    No* novo_elemento = (No*) malloc (sizeof(No));
    novo_elemento->valor = n;
    
    novo_elemento->prox = NULL;
    No* tmp = NULL;
    if (pilha_vazia(P)){
        P->topo = novo_elemento;
    }
    else{
        tmp = P->topo;
        novo_elemento->prox = P->topo;
        P->topo = novo_elemento;
    }
}

/* Função que devolve o elemento do topo da pilha após desempilha-lo.
   Deve liberar a memória após de desempilhamento. Se a pilha estiver
   vazia, deve devolver -1                                   */
int desempilha (Pilha* P){
    int n;
    if (pilha_vazia(P)){
        return -1;
    }
    else{
        No* tmp = P->topo;
        n = tmp->valor;
        tmp = tmp->prox;
        P->topo = tmp;
        return n; 
    }
}

/* Função que retorna o elemento que está no topo da pilha, mas sem
   desempilha-lo. Se a pilha estiver vazia, devolve -1.      */
int topo (Pilha* P){
    /* Escreva seu código aqui. */
    No* tmp = P->topo;
    if(pilha_vazia(P)){
        return -1;
    }
    else{
        return (tmp->valor);
    }
}

/* Função que mostra os elementos da pilha passada como parâmetro.
   Imprime os elementos da pilha iniciando por seu topo, separados
   por um espaço branco. Imprime uma quebra de linha no final.                                    */
void imprime (Pilha* P){
    /* Escreva seu código aqui. */
    No* tmp = P->topo;
    while (tmp != NULL){
        printf("%d ", tmp->valor);
        tmp = tmp->prox;
    }
    printf("\n");
}
