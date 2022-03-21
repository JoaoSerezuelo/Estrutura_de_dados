#include <stdio.h>
#include <stdlib.h>
/*Crie um vetor V com n inteiros, onde n é um valor inteiro fornecido pelo
usuário. O vetor só deve ser alocado dinamicamente na memória depois que
o usuário fornecer o valor de n.*/

int main (){
    int *v, n;
    printf("escreva um tamanho para um vetor: ");
    scanf("%i",&n);
    v= malloc (n*sizeof(int)); //realoquei dinamicamente com malloc 
    free(v);
    return 0;
}
