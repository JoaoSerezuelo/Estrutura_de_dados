#include <stdio.h>
#include <stdlib.h>
/*Escreva uma função recursiva que determine quantas vezes um
dígito K ocorre em um número natural N. Por exemplo, o dígito
2 ocorre 3 vezes em 762021192.*/

int ocorrencia (int k, int n){
    int i=1;
    if(n==0){
        return 0;
    }
    else{
        if(n%10==k){
            i++;
        }
        return i+ocorrencia(k,n/10);
    }
}
/*dividi o numero por 10 sucessivamente até ele zerar e chegar no caso base 
e durante essa divisão eu pegava o reto e chegava se esse número era igual 
ao numero k se sim adicionava um a um contador caso contrario nada acontecia*/

int main (){
    int k,n;
    printf("escreva um numero de 0 a 9:  ");
    scanf("%i",&k);
    printf("escreva um numero natural:  ");
    scanf("%i",&n);
    printf("o digito %i ocorre %i vezes em %i\n",k,ocorrencia(k,n/10),n);
    return 0;
}