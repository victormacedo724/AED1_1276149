#include <stdio.h>
#include <stdlib.h>

typedef struct pilha {
    int *valor;
    int topo;
}p;

void analisa (int v[], p pilha, int n){
    int i=0, t=0, c=0, aux=0;
    for (i=1; i<=n; i++){
        if (v[t] == i){
            t++;
        }
        else {
            if (pilha.topo > 0 && pilha.valor[pilha.topo -1] == v[t]){
                t++;
                pilha.topo--;
                i--;
            }
            else {
                pilha.valor [pilha.topo] = i;
                pilha.topo++;
            }
        }
    }
    while (pilha.topo > 0 && pilha.valor[pilha.topo - 1] == v[t]) {
        t++;
        pilha.topo--;
    }
    if (t == n) {
            printf("Yes\n");
        } else {
            printf("No\n");
    }
}

int main(){
    int n=0;
    scanf ("%d", &n);
    while (n != 0){
        int v1[n];
        scanf ("%d", &v1[0]);
        while (v1[0] != 0){
            p pilha;
            pilha.topo = 0;
            pilha.valor = malloc (n*sizeof(int));
            for (int i=1; i<n; i++){
                scanf ("%d", &v1[i]);
            }
            analisa (v1, pilha, n);
            free (pilha.valor);
            scanf ("%d", &v1[0]);
        }
        printf ("\n");
        scanf ("%d", &n);
    }
    return 0;
}
