#include <stdio.h>
#include <stdlib.h>
/*A função fatorial duplo é definida como o produto de todos os
números naturais ímpares de 1 até algum número natural ímpar
N. Assim, o fatorial duplo de 5 é 5!! = 1 * 3 * 5 = 15 Faça uma
função recursiva que receba um número inteiro positivo impar N
e retorne o fatorial duplo desse número.*/

int fatd (int n){
    if(n==-1)
        return 1;
    if(n%2==0)
        return 1*fatd(n-2);
    if(n%2!=0)
        return n*fatd(n-2);
}
/*defini um caso base (-1) que retornava 1 para não alterar a multiplicação fatorial
dupla e defini dois IFs, se o numero fosse par multiplica a por 1 e seguia 
na recursividade se fosse impar multiplicava pelo proprio numero, fiz esse processo
até chegar no caso base*/

int main(){
    int n;
    do{
        printf("inforne um numero inteiro positivo impar: ");
        scanf("%i",&n);
    }while(n%2==0);
    printf("o fatorial duplo de %i e: %i",n,fatd(n));
    return 0;
}