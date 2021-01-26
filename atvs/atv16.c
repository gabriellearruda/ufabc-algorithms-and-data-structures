#include <stdio.h>
#include <stdlib.h>
#include "fila.h"


/*   Função que cria e devolve o endereço de uma fila. 
     A fila criada estará vazia, com o inicio igual a NULL. */
Fila* cria_fila(){
    /* Escreva seu código aqui. */
    Fila* nova = (Fila*) malloc (sizeof(Fila));
    nova->inicio = NULL;
    return nova;
}

/* Verifica se a fila enviada como parâmetro está vazia ou não.
   Devolve 1 se a fila estiver vazia, ou 0, caso contrário */
int fila_vazia(Fila* F){
    return (F->inicio == NULL);
    /* Escreva seu código aqui. */
}

/* Função que realiza a inclusão de um elemento no fim da fila. */
void enfileira (Fila* F, int n){
    /* Escreva seu código aqui. */
    No* novo_elemento = (No*) malloc (sizeof(No));
    novo_elemento->valor = n;
    novo_elemento->prox = NULL;

    No* tmp = NULL;

    if (fila_vazia(F)){
        F->inicio = novo_elemento;
    }
    else{
        tmp = F->inicio;
        while (tmp->prox != NULL){
            tmp = tmp->prox;
        }
        tmp->prox = novo_elemento;
    }
}

/* Função que devolve o elemento do inicio da fila após sua remoção.
   Deve liberar a memória após de desenfileiramento. Se a fila estiver
   vazia, deve devolver -1                                   */
int desenfileira (Fila* F){
    /* Escreva seu código aqui. */
    int n;
    if (fila_vazia(F)){
        return -1;
    }
    else{
        No* tmp = F->inicio;
        n = tmp->valor;
        tmp = tmp->prox;
        F->inicio = tmp;
        return n;
    }
}

/* Função que retorna o elemento que está no inicio da fila, mas sema
   remove-lo. Se a pilha estiver vazia, devolve -1.      */
int inicio_fila (Fila* F){
    /* Escreva seu código aqui. */
    No* tmp = F->inicio;
        if(fila_vazia(F)){
        return -1;
    }
    else{
        return (tmp->valor);
    }

}

/* Função que mostra os elementos da fila passada como parâmetro.
   Imprime os elementos da fila iniciando por seu inicio, separados
   por um espaço branco. Imprime uma quebra de linha no final. */
void imprime (Fila* F){
    /* Escreva seu código aqui. */
    No* tmp = F->inicio;
    while (tmp != NULL){
        printf("%d ", tmp->valor);
        tmp = tmp->prox;
    }
    printf("\n");
}

