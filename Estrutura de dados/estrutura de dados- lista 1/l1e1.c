#include <stdio.h>
#include <stdlib.h>

/*Faça uma função recursiva que permita inverter um número
inteiro N. Ex: 123 – 321*/

int inverter(int n){
    if(n==0)
        return n;
    else{
        printf("%i",n%10);
        return inverter(n/10);
    }
}
/*a função vai verificar se o número não é 0 porque se for acabou o objetivo dela, caso contrario ela vai continuar pegando e 
escrevendo o resto da divisão por 10 desse número e chamando ele nessa mesma função já dividido por 10*/

int main (){
    int n;
    scanf("%i",&n);
    inverter(n);
    return 0;  
}