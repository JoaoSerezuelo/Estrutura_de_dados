#include <stdio.h>
#include <stdlib.h>

/*O máximo divisor comum dos inteiros x e y é o maior inteiro que
é divisível por x e y. Escreva uma função recursiva mdc em C,
que retorna o máximo divisor comum de x e y. O mdc de x e y é
definido como segue: se y é igual a 0, então mdc(x,y) é x; caso
contrário, mdc(x,y) é mdc (y, x%y), onde % é o operador resto.*/
 int mdc( int x,int y){
     int aux;
     if(y==0)
        return x;
    else{
        aux=mdc(y,x%y);
        return aux;
    }
 }
/*usei a formula fornecida delo enunciado de forma recursiva a até chegar no caso basse informado pelo mesmo*/

int main (){
    int x,y;
    printf("escreva 2 numeros inteiros para ver seu maximo divisor comum\n 1- ");
    scanf("%i",&x);
    printf("2- ");
    scanf("%i",&y);
    printf("o mdc e: %i",mdc(x,y));
    return 0;
}