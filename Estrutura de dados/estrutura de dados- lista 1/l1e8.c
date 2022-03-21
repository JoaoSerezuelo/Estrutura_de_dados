#include <stdio.h>
#include <stdlib.h>
/*Faça uma função recursiva que receba um número inteiro
positivo par N e imprima todos os números pares de 0 até N em
ordem decrescente.*/

void par (int n){
    if(n>=0){
        printf("%i |",n);
        par(n-2);
    }
}
/*peguei o numero par (fiz uma checagem na função main) e foi tirando 
de 2 em 2 até chegar a zero quando eu parava de fazer esse processo, 
no meio do processo eu escrevia os numeros*/ 

int main (){
    int n;
    do{
        printf("escreva um numero par: \n");
        scanf("%i",&n);
        if(n%2!=0){
            printf("so e aceito numero par\n");
        }
    }while(n%2!=0);
    printf("\n");
    par(n);
    return 0;
}