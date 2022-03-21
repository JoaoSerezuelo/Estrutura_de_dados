#include <stdio.h>
#include <stdlib.h>
/*Crie um programa em C que receba um vetor de números reais
com 100 elementos. Escreva uma função recursiva que inverta
ordem dos elementos presentes no vetor.*/
void vet(float v[],int i,int n){
    float aux;
    if(i<=n){
        aux=v[i];
        v[i]=v[n];
        v[n]=aux;
        vet(v,i+1,n-1);
    }
}
/*vou trocando a primeira posição do vetor com a ultima com a ajuda de uma variavel auxiliar, depois
a penultima posição com a segunda e assim sucessivamente com a ajuda da recurção ate chegar na metade
quando eu paro com esse processo*/

int main(){
    int n=100,i=0;
    float v[n];
    for(i=0; i<n; i++){
        scanf("%f",&v[i]);
    }
    i=0;
    printf("**************\n");
    vet(v,i,n-1);
    for(int i=0; i<n; i++)
        printf("%f \n",v[i]);
    return 0;
}