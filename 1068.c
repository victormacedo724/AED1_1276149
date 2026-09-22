/* --------------------------------------------------------------------------
Disciplina  : Algoritimo e Estrutura de Dados 2026S1
Nome        : Victor Hugo Ribeiro de Macedo
Linguagem   : C
Problema    : 1068
Data        : 22/09/2026
Objetivo    : Dada uma expressão qualquer com parênteses, indique se a quantidade de parênteses está correta ou não, sem levar em conta o restante da expressão.
Dificuldade : medio/dificil (nivel 5)
Uso de IA   : usei so pra fazer a varredura do codigo, mudei uma variavel ou outra.
-------------------------------------------------------------------------- */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 1000

struct expressao {
    char string [max];
    int topo;
};
typedef struct expressao exp;

int tamanho (char s[]){
    int i=0;
    while ( s[i] != '\0'){
        i++;
    }
    return i;
}

void verifica (exp *e){
    if (e->topo == 0){
        printf ("correct\n");
    }
    else {
        printf ("incorrect\n");
    }
}

void le (exp *e, char s[]){
    int i=0, t=0, n=0;
    t = tamanho (s);
    for (i=0; i<t; i++){
        if (s[i] == '('){
            e->string[n] = s[i];
            e->topo++;
            n++;
        }
        else { 
            if (s[i] == ')'){
                if (e->topo == 0){
                    e->topo = -1;
                    break;
                }
                else  
                    e->topo--;
            }
        }
    }
    verifica (e);
}

int main(){
    exp e;
    char s [max];
    while (fgets(s, sizeof(s), stdin) != NULL) {
        e.topo = 0;
        le(&e, s);
    }
    return 0;
}
