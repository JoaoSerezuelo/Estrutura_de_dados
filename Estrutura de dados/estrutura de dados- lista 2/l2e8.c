#include <stdio.h>
#include <stdlib.h>

/*Escrever um programa que cadastre alguns produtos em um vetor de
estruturas/registros alocado dinamicamente. Em seguida, imprima uma lista
com o código e nome da cada produto. Por último, consulte o preço de um
produto através de seu código*/

int main (){
    typedef struct {
        int cod;
        float preco;
        char name[20];
    }registro;
}