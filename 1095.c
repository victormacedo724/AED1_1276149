/* --------------------------------------------------------------------------
Disciplina  : Algoritimo e Estrutura de Dados 2026S1
Nome        : Victor Hugo Ribeiro de Macedo
Linguagem   : C
Problema    : 1095
Data        : 28/10/2026
Objetivo    : Imprimir a devoda sequencia de I e J até J=0
Dificuldade : facil (nivel 1)
Uso de IA   : Nenhum
-------------------------------------------------------------------------- */
#include <stdio.h>
 
int main() {
    int I=0, J=0;
    I=1;
    J=60;
    for (int c=0; c<=12; c++){
        printf ("I=%d J=%d\n", I, J);
        I=I+3;
        J=J-5;
    }
    return 0;
}
