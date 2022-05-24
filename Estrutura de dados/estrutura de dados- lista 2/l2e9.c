#include <stdio.h>
#include <stdlib.h>

/*Construa um programa (main) que aloque dinamicamente uma matriz de
ordem m x n (linha por coluna) e preencha ela usando 1+m chamadas a
função malloc. Em seguida imprima os valores da matriz e libere a área de
memória alocada por essa.
Dica: Alocar a matriz com ponteiro de ponteiro.*/

int main (){
    int **p;
    int i,j,n,m;
    printf("LINHAS: ");
    scanf("%i",&n);
    printf("COLUNAS: ");
    scanf("%i",&m);
    p=(int **) malloc (n*sizeof(int *));
    for(i=0;i<n;i++){
        p[i]=(int *) malloc(m*sizeof(int));
        for(j=0;j<m;j++){
            printf("%i%i: ",i,j);
            scanf("%i",&p[i][j]);
        }

    }
    for(i=0;i<m;i++){
        free(p[i]);
    }
    free(p);
    p=NULL;
    return 0;
}