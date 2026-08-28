/* --------------------------------------------------------------------------
Disciplina  : Algoritimo e Estrutura de Dados 2026S1
Nome        : Victor Hugo Ribeiro de Macedo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 28/08/2026
Objetivo    : Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.
Dificuldade : facil (nivel 2)
Uso de IA   : usei so pra fazer a varredura do codigo, a unica que mudei foi o (j+1)
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(){
    int v[MAX];
    int i=0, j=0, c=0, a=0;
    for (i=0; i<MAX; i++){
        scanf ("%d", &v[i]);
        while (v[i] < 0){
            scanf ("%d", &v[i]);
        }
    }
    for (j=0; j<MAX; j++){
        if (c < v[j]){
            c = v[j];
            a = j+1;
        }
    }
    printf ("%d\n", c);
    printf ("%d\n", a);
    return 0;
}
