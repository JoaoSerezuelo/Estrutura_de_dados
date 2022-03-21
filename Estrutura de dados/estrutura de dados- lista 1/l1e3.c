#include <stdio.h>
#include <stdlib.h>
/*Crie uma função recursiva que receba um número inteiro
positivo N e calcule o somatório dos números de 1 a N.*/
 int soma(int n){
     if(n==1)
         return 1;
     else{
        return n+soma(n-1);
     }
 }
 /*somei todos os numeros de 1 até n, comecando pelo n e chamndo novamente a função sucessivamente
 até chegar no caso base 1 que retorna 1 para soma e acaba aí o problema*/
 int main (){
     int n;
     scanf("%i",&n);
     printf("o valor do somatorio de 1 ate %i e: %i",n,soma(n));
     return 0;
 }