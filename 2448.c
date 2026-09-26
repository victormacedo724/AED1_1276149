/* --------------------------------------------------------------------------
Disciplina  : Algoritimo e Estrutura de Dados 2026S1
Nome        : Victor Hugo Ribeiro de Macedo
Linguagem   : C
Problema    : 2448
Data        : 26/09/2026
Objetivo    : Escreva um programa que determine quanto tempo o carteiro levará para entregar todas as encomendas, assumindo que quando o tempo começa a contar, 
  ele está na primeira casa (a de menor número), e o tempo termina de contar quando todas as encomendas foram entregues (mesmo que o carteiro não esteja de volta na primeira casa). Você 
  pode desprezar o tempo para colocar a encomenda na caixa de correio (ou seja, se ele só tiver uma encomenda, para a primeira casa, a resposta para o problema é zero).
Dificuldade : medio (nivel 5)
Uso de IA   : usei so pra fazer a varredura do codigo, mudei uma variavel ou outra.
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>


int buscaBinaria (int *casas, int tamanho, int encm){
    int meio, final=tamanho-1, inicio=0, passos;
    while (inicio <= final){
        meio = inicio + (final - inicio) / 2; //dependendo do vetor nao dar estouro de variavel (nunca ai ser maior que "fim")
        if (casas[meio] == encm){
            return meio;
        }
        if (casas [meio] < encm){
            inicio = meio + 1;   

        }
        else {
            final = meio - 1;
        }
    }
    return -1;
};

void preenche_casas_encomendas (int *casas_encomenda, int n){
    int i=0;
    while (i < n){
        scanf ("%d", &casas_encomenda[i]);
        i++;
    }
}

int main(){
    int n=0, e=0, aux=0, tempo0=0, posant=0;
    long long tempo1=0, tempo2=0;
    scanf ("%d", &n);
    scanf ("%d", &e);
    int *casas = malloc(n * sizeof(int)); 
    int *encomenda = malloc(e * sizeof(int));
    preenche_casas_encomendas (casas, n);
    preenche_casas_encomendas (encomenda, e);
    while (aux < e){
        tempo0 = buscaBinaria(casas, n, encomenda[aux]);
        if (tempo0 != -1){
            tempo1= tempo0 - posant;
            if (tempo1<0)
                tempo1 = tempo1 * (-1);
            tempo2 = tempo2 + tempo1;
            posant=tempo0;
        }
        aux++; 
    }
    printf ("%lld\n", tempo2);
    free (casas);
    free (encomenda);
    return 0;
}
