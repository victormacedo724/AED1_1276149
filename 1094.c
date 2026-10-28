/* --------------------------------------------------------------------------
Disciplina  : Algoritimo e Estrutura de Dados 2026S1
Nome        : Victor Hugo Ribeiro de Macedo
Linguagem   : C
Problema    : 1094
Data        : 28/10/2026
Objetivo    : Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para organizar os 
experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano, quantas cobaias foram 
utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada.
Dificuldade : facil (nivel 3)
Uso de IA   : Nenhum
-------------------------------------------------------------------------- */
#include <stdio.h>

int main(){
    int c=0, s=0, r=0, n=0, a=0, b=0;
    float total=0;
    char v;
    scanf ("%d", &n);
    while (a<n){
        scanf ("%d %c", &b, &v);
        if (v == 'C'){
            c = c+b;
            total = total + b;
        }
        else if (v == 'R'){
            r = r+b;
            total = total + b;
        }
        else if (v == 'S'){
            s = s+b;
            total = total + b;
        }
        a++;
    }
    double pc=0, ps=0, pr=0;
    pc = ((double)c / total)*100;
    ps = ((double)s / total)*100;
    pr = ((double)r / total)*100;
    printf ("Total: %.0f cobaias\n", total);
    printf ("Total de coelhos: %d\n", c);
    printf ("Total de ratos: %d\n", r);
    printf ("Total de sapos: %d\n", s);
    printf ("Percentual de coelhos: %0.2f %%\n", pc);
    printf ("Percentual de ratos: %0.2f %%\n", pr);
    printf ("Percentual de sapos: %0.2f %%\n", ps);
    return 0;
}
