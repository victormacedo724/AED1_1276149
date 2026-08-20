#include <stdio.h>

int denovo (int n){
    printf ("Seu valor de '%d' nao eh aceito como tamanho do vetor, tente denovo", n);
    scanf ("%d", &n);
    return n;
}

void verifica (int v[], int n){
    int i=0, aux=0;
    int a = v[0];
    while (i <= n){
        if ( v[i] <= a){
            a = v[i];
            aux = i;
        }
    i++;
    }
    printf ("Menor valor: %d \nPosicao: %d", a, aux+1);
}


int main(){
    int n=0, i=0;
    printf ("Digite o tamanho do seu vetor, (0<n<1000) respectivamente\n");
    scanf ("%d", &n);
    while (n >= 1000 || n <= 0)
        n = denovo (n);
    int v[n];
    printf ("digite o conteudo do seu vetor: \n");
    for (i=0; i<n; i++){
        scanf ("%d", &v[i]);
    }
    verifica (v, i);
    return 0;
}
