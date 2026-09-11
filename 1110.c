/* --------------------------------------------------------------------------
Disciplina  : Algoritimo e Estrutura de Dados 2026S1
Nome        : Victor Hugo Ribeiro de Macedo
Linguagem   : C
Problema    : 1110 
Data        : 11/09/2026
Objetivo    : Jogue fora a carta do topo e mova a próxima carta (a que ficou no topo) para a base da pilha. Sua tarefa é encontrar a sequência de cartas descartadas e a última carta remanescente.
Dificuldade : medio (nivel 3)
Uso de IA   : usei so pra fazer a varredura do codigo, mudei minimamente o codigo, mas 95% dele fiz sozinho
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

struct card {
    int num;
    struct card *prox;
};

typedef struct card carta;

void insere_num (carta *cbc, int n){
    carta *novo = malloc(sizeof(carta));    
    novo->prox = NULL;
    novo->num = n;
    carta *atual;
    atual = cbc;
    while (atual->prox != NULL)
        atual = atual->prox;
    atual->prox = novo;
}

void descarta_move_imprime (carta *cbc, int n, int *v){
    carta *final = cbc->prox;
    int i=0;
    carta *aux = final;
    carta *aux2 = final;
    while (1){
        v[i] = aux2->num;
        if (i == n - 2) {
            final = aux2->prox; 
            break;
        }
        aux2 = aux2->prox;  
        final = aux2; 
        aux2 = aux2->prox; 
        aux = cbc->prox;
        while (aux->prox != NULL) 
            aux = aux->prox; 
        if (aux == final)
            break;
        aux->prox = final; 
        final->prox = NULL;  
        i++;
    }
    printf("Discarded cards:");
for (i = 0; i < n - 1; i++) {
    printf(" %d", v[i]);
    if (i < n - 2) printf(",");
    }
    printf ("\nRemaining card: %d\n", final->num);
}

void libera (carta *cbc, int *v){
    carta *atual = cbc->prox;
    carta *liberado;
    free (v);
    while (atual != NULL){
        liberado = atual;
        atual = atual->prox;
        free (liberado);
    }
    cbc->prox = NULL;
}

int main (){
    carta cbc;
    int n=0, i=1;
    cbc.prox = NULL;
    scanf ("%d", &n);
    while (n != 0){
        i = 1;
        if (n==1){
            printf("Discarded cards:\n");
            printf("Remaining card: 1\n");        
        }
        else {
            int *v = malloc (n * sizeof(int));
            while (i <= n){
                insere_num (&cbc, i);
                i++;
            }
            descarta_move_imprime(&cbc, n, v);
            libera (&cbc, v);
        }
        scanf ("%d", &n);
    }
    return 0;
}
