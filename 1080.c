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
