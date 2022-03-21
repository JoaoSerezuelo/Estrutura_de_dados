#include <stdio.h>
#include <stdlib.h>
/*Crie um programa em C, que contenha uma função recursiva
que receba dois inteiros positivos k e n e calcule k^n. Utilize
apenas multiplicações. O programa principal deve solicitar ao
usuário os valores de k e n e imprimir o resultado da chamada
da função.*/

int pot(int k,int n){
    if(n==0)
        return 1;
    else
        return k*pot(k,n-1);
}
/*chamo a função nela mesma multiplicando k por k, n vezes. vou diminuindo esse n que foi escolhido pelo usuario
em uma unidade até ele ser igual a zero, que é quando eu chego meu caso base e multiplico tudo por 1 para acabar 
a recursividade*/

int main(){
    int k,n;
    printf("base: ");
    scanf("%i",&k);
    printf("expoente: ");
    scanf("%i",&n);
    printf("resultado da potencia: %i",pot(k,n));
    return 0;
}